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
int prevButtonState = LOW;
boolean pressed = false;
//analog sensor variables
int lightVar = 0;
int potVar = 0;

//state machine variables
int stateVar;

void setup() {
  // set up pins
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(fadeLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();

  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH && prevButtonState == LOW) {
    delay(5);
    stateVar++;
    if (stateVar >= 4) stateVar = 0;
  }
  prevButtonState = buttonState;


  switch (stateVar) {
    case 0:
      Serial.println("night light mode");
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
      if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;
        // Serial.println();
        if (fadeUp == true) {
          if (fadeLevel != 255) fadeLevel++;
        } else {
          if (fadeLevel != 0) fadeLevel--;
        }
      }
      break;
    case 1:
      fadeLevel = 0;
      stateVar = 2;
    case 2:
      ledState = HIGH;
      Serial.println("projector mode");
      break;
    case 3:
      ledState = LOW;
      stateVar = 0;
      break;
  }


  //write to the LED pins
  digitalWrite(ledPin, ledState);
  analogWrite(fadeLed, fadeLevel);


}
