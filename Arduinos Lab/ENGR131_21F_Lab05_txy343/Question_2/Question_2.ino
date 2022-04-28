

int PhotoPin = 0; //Define photoresistor to AnalogPin0
int LedPin = 3; //Define LED to DigitalPin3
int PhotoValue;
int mappedVal; 


void setup(){
  pinMode(PhotoPin,INPUT); // initialize photoresistor to input
  pinMode(LedPin,OUTPUT); // initialize LED to output
  Serial.begin(9600); // initialize serial
  
}


void loop(){
  PhotoValue = analogRead(PhotoPin);   // read value of photoresistor  
  mappedVal = map(PhotoValue,0,1023,0,255); // convert A0 voltage from 0 to 225  //reads - t
  analogWrite(LedPin,mappedVal); //turn on LED pin  to value above
  //Serial.print(" The command value to the LED = "); 
  Serial.println(mappedVal); 
  delay(10);
  
}
