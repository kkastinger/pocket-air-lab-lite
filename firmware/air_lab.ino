#include <Wire.h>
#include <U8g2lib.h>
#include <bb_scd41.h>
#include <HijelHID_BLEKeyboard.h>

HijelHID_BLEKeyboard keyboard;

SCD41 mySensor;
#define SDA_PIN 8 //czujnik pin 8,9
#define SCL_PIN 9
//tu jest ekranik swi2c bo to jest tryb awaryjny to sie okazalo zadzialo przy tym
// to bylo cos takiego ze piny braly te same zasoby procesora i sie zawieszalo elektrycznie  i to pomoglo
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ 6, /* data=*/ 5, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  if (mySensor.init(SDA_PIN, SCL_PIN, false, 100000) == SCD41_SUCCESS) {
    mySensor.start(); 
    u8g2.begin();
    u8g2.setContrast(255);
    u8g2.setFont(u8g2_font_helvB08_tf);
    u8g2.setCursor(30, 27);
    u8g2.printf("Starting...");
    u8g2.sendBuffer();
    delay(1000);
    keyboard.setLogLevel(HIDLogLevel::Normal);
    keyboard.begin(); //inicjator klawiatury
  }  
}

void loop() {
  // pytanie czujnika co 5 sekund na serialu i drukowanie na wyświetlaczu
  if (mySensor.getSample()) {
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_helvB10_tf);  
    char buf[0];
    sprintf(buf, "CO2: %d", mySensor.co2());
    u8g2.drawStr(30, 24, buf); 
    u8g2.setFont(u8g2_font_helvB08_tf);
    sprintf(buf, "Temp: %ldC", mySensor.temperature()/10);
    u8g2.drawStr(30, 38, buf); 
    sprintf(buf, "Humid: %d%%", mySensor.humidity());
    u8g2.drawStr(30, 50, buf);     
    u8g2.sendBuffer();  } 
  delay(2000);
  keyboard.print("C02: "); //sekcja wydruku na klawiaturze
  keyboard.print(mySensor.co2());
  keyboard.print(", Humid: ");
  keyboard.print(mySensor.humidity());
  keyboard.print(", Temp: ");
  keyboard.print(mySensor.temperature()/10);
  keyboard.tap(KEY_RETURN);
}