int LedPin = 4;


void setup() {

  pinMode(LedPin,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);

}


void loop() {

Serial.println(digitalRead(2)); 


}
