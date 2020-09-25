// variable's decleration and value assigned
int ledPin = 2;
int buttonPin = 3;
int potPin= A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  // serial communication baund rate
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin);
  int potValue = analogRead(potPin) / 4 ;
  digitalWrite(ledPin,buttonState);

  //serial write
  Serial.print("Button State: ");
  Serial.print(buttonState ) ;
  Serial.print(" Original POT Value: ");
  Serial.print(analogRead(potPin) );
  Serial.print(" Updated Value: " );
  Serial.print(potValue);
  Serial.print(" LED State: " );
  Serial.println(buttonState);
}
