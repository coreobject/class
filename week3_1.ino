
const int buttonPin = 2;
const int ledPin =  12;
const int fadeLed = 11;
int ledState = LOW;
int buttonState = 0;
int fadeLevel = 0;
boolean pressed = false;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(fadeLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);


  if (buttonState == HIGH && pressed == false ) {
    // turn LED on:
    if (ledState == LOW) {
      ledState = HIGH;
          Serial.println("bang");
    }
    else {
      ledState = LOW;
    }
    pressed = true;
  }

  if (buttonState == LOW && pressed == true ) {
    pressed = false;
  }

  fadeLevel++;

   digitalWrite(ledPin, ledState);
   analogWrite(fadeLed,fadeLevel);
}
