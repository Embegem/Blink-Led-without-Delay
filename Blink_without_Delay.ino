int ledPin = 13; // LED connected to digital pin 13
int value = LOW; // previous value of the LED
long previousMillis = 0; // will store last time LED was updated
long interval = 5000; // interval at which to blink (milliseconds)
// keep in mind to use long datatype in interval and previous millis or else if you use int intead of long your code 
//will not work. either you have to decrease the interval to 255 for the code to work. more than 255, your code will not give
// the expected results.

void setup()
{
pinMode(ledPin, OUTPUT); // sets the digital pin as output
}
void loop()
{
// here is where you'd put code that needs to be running all the time.
Led_blink();
}

void Led_blink(){
  if (millis() - previousMillis > interval) {// if millis() - previousMillis is graeter than interval mentioned above
previousMillis = millis(); // remember the last time we blinked the LED
// if the LED is off turn it on and vice-versa.

if (value == LOW){
value = HIGH;}
else{
value = LOW;}
digitalWrite(ledPin, value);
}
}// keeping interval for 5 seconds
//try out for 1,2 and 10s and comment below 
