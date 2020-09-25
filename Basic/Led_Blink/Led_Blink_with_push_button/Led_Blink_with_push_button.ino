// variable's decleration and value assigned
int ledPin = 2;
int buttonPin = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonState = digitalRead(buttonPin);
digitalWrite(ledPin,buttonState);
}
