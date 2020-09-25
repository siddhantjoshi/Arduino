int potPin = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue=analogRead(potPin) / 255;
  switch(potValue){
    case 0:
      Serial.println("0");
      break;
    case 1:
      Serial.println("1");
      break;
    case 2:
      Serial.println("2");
      break;
    case 3:
      Serial.println("3");
      break;
    case 4:
      Serial.println("4");
      break;        
  }
 
}
