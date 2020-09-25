int ledPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i; i < 256; i++){
    analogWrite(ledPin,i);
    Serial.println(i);
  }
  for(int i=255; i >0; i--){
    analogWrite(ledPin,i);
 n   Serial.println(i);
  }
}
