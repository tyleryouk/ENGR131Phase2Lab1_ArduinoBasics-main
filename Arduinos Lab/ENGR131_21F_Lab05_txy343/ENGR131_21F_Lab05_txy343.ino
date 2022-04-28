//A. Build the physical circuit

//B. Define constants for button D2 and LED D4 pins
int ButtonPin = 2;  
int LedPin = 4;
//C. Define state of button and a flag to increment the counter
int ButtonState; // state of button
int ButtonCounter = 0; // counter
int flag = 0; // flag to determine whether to increment the counter


void setup() {
  // D. in setup()
  pinMode(ButtonPin,INPUT); //button pin to input
  pinMode(LedPin,OUTPUT); //LED pin to output
  Serial.begin(9600); //intialize serial port at 9600 baud
}


void loop() {
  // E. in main loop
  ButtonState = digitalRead(ButtonPin); //digitalRead to read state of button pin
  if (ButtonState == HIGH) {  // if button is pressed
    digitalWrite(LedPin,HIGH); // set LED pin to high
    if (flag < 1) {
      ButtonCounter++; //button pressed
      flag = 1; 
    }
  }
  else {
    digitalWrite(LedPin,LOW); //button not pressed, set Pin to LOW
    flag = 0;  //indicating button not pressed (back to 0)
  }
  Serial.print ("Button state = ");    // prints 0 or 1 (1 = button is pressed)    
  Serial.println(ButtonState);
  Serial.print ("Button Counter Value = "); // prints number of button presses   
  Serial.println(ButtonCounter);
  delay(1000);

}


// QUESTION 2
