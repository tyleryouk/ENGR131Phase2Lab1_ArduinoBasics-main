void setup() {
  // put your setup code here, to run once:
  pinMode (13,OUTPUT);

}

void loop() {
  
  digitalWrite(13,HIGH); // turn on 13
  delay(5000); # delay 5 seconds
  digitalWrite(13,LOW); // turn off 13
  delay(5000);
  
}

//LED : colorful bulbs
