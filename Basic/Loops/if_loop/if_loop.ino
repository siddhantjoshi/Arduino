int buttonPin = 3;
int ledPin = 2 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin) ;
  int ledstate = digitalRead(ledPin) ;

  //start loop
  if(buttonState == 1 && ledstate == 0){
    digitalWrite(ledPin,HIGH);
    }else{
      digitalWrite(ledPin,LOW);
  }
  
}
