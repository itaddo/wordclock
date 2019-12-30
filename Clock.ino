// NeoPixel 8x8, RTC DS3231, Arduino Nano, Old Bootloader auswählen

#include <Adafruit_NeoPixel.h>
#include <RTClib.h>
#include <Wire.h>

#define RTC_I2C_ADDRESS 0x68  // I2C Adresse des RTC  DS3231
#define PIN        5          // Digital Pin 5, NeoPixel connection
#define NUMPIXELS 64          // LEDs at NeoPixel, 64 per

// define delays
#define SHIFTDELAY 100      // controls color shifting speed
#define TESTDELAY 65        // Time (in milliseconds) to pause between pixels

// Globals
RTC_DS3231 rtc;
boolean stern = true;     // Blinkestern
int dhour;                // display hour
int dminute;              //display minute
int dsecond;              // display second

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);     // Baudrate für seriellen Monitor
  Wire.begin();

  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");  // kein RTC angeschlossen/gefunden
    while (1);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, lets set the time!");
    // following line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // This line sets the RTC with an explicit date & time, for example to set
    // January 21, 2014 at 3am you would call:
    // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
  }
  
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.clear(); // Set all pixel colors to 'off'

  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  // Test der LEDs je pro Farbe
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 10, 0));
    pixels.show();      // Send the updated pixel colors to the hardware.
    delay(TESTDELAY); } // Pause before next pass through loop

  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(10, 0, 0));
    pixels.show();       // Send the updated pixel colors to the hardware.
    delay(TESTDELAY); } // Pause before next pass through loop

  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(0, 0, 10));
    pixels.show();      // Send the updated pixel colors to the hardware.
    delay(TESTDELAY); } // Pause before next pass through loop

  pixels.clear(); // Set all pixel colors to 'off'
  smile();          // =)
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(1500);
}

void loop() {
  DateTime now = rtc.now();   // aktuelle Zeit auslesen
  pixels.clear();   // Set all pixel colors to 'off'
  
  if (stern == true){   
    pixels.setPixelColor(15, pixels.Color(10, 0, 0)); }
  stern = !stern;       // Blinkester Umschalter

  dhour = now.hour();   // aktuelle Stunde
  dminute = now.minute(); // aktuelle Minuten
  //dsecond = now.second(); // aktuelle Sekunden

//troubleshooting Zeitanzeige
  Serial.println("dhour:");
  Serial.println(dhour);

  Serial.println("dminute");
  Serial.println(dminute);

  Serial.println("dsecond");
  Serial.println(now.second());

  // time we display the appropriate minute counter
  displayTime();
  pixels.show();    // Send the updated pixel colors to the hardware.
  delay(1000);
 // Loop end
}
