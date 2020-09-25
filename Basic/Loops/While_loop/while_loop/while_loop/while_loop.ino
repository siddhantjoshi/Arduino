int buttonPin = 3;
int ledPin = 2 ;
int ledState = 0 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin) ;

  //start loop
  while(buttonState == 0){
    ledState= !ledState;
    digitalWrite(ledPin,ledState);
    delay(50);
    buttonState = digitalRead(buttonPin) ;
  }
    ledState= !ledState;
    digitalWrite(ledPin,ledState);
    delay(500);
  
}
