//create variables for pins
const int buttonPin = 2;
const int ledPin =  12;
const int fadeLed = 11;
const int potPin = 0;
const int lightPin = 1;

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
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && pressed == false ) { //if it is pressed now but was not pressed last loop
    delay(5);
  //  Serial.println("BANG!");
    // toggle lED:
    if (ledState == LOW) {
      ledState = HIGH;
    }
    else {
      ledState = LOW;
    }
    pressed = true; //change this so we know the button was pressed
  }

  if (buttonState == LOW && pressed == true ) { //if the button is no longer pressed but was pressed last loop
    delay(5);
    pressed = false; //change this so we know it is no longer pressed
  }

//code for fading LED up and down
  if (fadeUp == true) { //LED is fading up
    fadeLevel++;
    if (fadeLevel == 25500) { //LED has reached the top
      fadeUp = false; // LED is fading down
    }
  } else {
    fadeLevel--;
    if (fadeLevel == 0) { // fadeLevel has reached the bottom
      fadeUp = true; // so start fading up
    }
  }

//check sensors
  potVar = analogRead(potPin);
  lightVar = analogRead(lightPin);

//write to the LED pins
//Serial.println(fadeLevel/4);
   digitalWrite(ledPin, ledState);
   analogWrite(fadeLed,fadeLevel/100);
}
