//create variables for pins
const int buttonPin = 2;
const int ledPin =  12;
const int fadeLed = 11;
const int potPin = 0;
const int lightPin = 1;

// Time code
unsigned long previousMillis = 0; 
const long interval = 10; 

// LED fading variables
boolean fadeUp = true;
int fadeLevel = 0;
//LED blinking variables
int ledState = LOW;
//button variables
int buttonState = 0;
boolean pressed = false;
//analog sensor variables
int lightVar = 0;
int potVar = 0;

void setup() {
  // set up pins
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(fadeLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    unsigned long currentMillis = millis();

  //check sensors
  potVar = analogRead(potPin);
  lightVar = analogRead(lightPin);

//logic
  if ( lightVar <= potVar ) {
    fadeUp = true;
  } else {
    fadeUp = false;
  }

//display
if(currentMillis - previousMillis >= interval) {
   previousMillis = currentMillis;
 // Serial.println();
  if (fadeUp == true) {
    if (fadeLevel != 255) fadeLevel++;
  } else {
    if (fadeLevel != 0) fadeLevel--;
  }
}

  //write to the LED pins
  digitalWrite(ledPin, ledState);
  analogWrite(fadeLed, fadeLevel);

Serial.println(potVar);
}
