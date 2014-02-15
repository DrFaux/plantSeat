const int VAL_PROBE = 0; // Analog pin 0
const int MOISTURE_LEVEL = 950; // the value after the LED goes ON
int Led = 7;
 
 
void setup() {
    Serial.begin(9600);
      pinMode(Led, OUTPUT);
}
 
void LedState(int state) {
    digitalWrite(7, state);
}
 
void loop() {
    int moisture = analogRead(VAL_PROBE);
 
 
 
Serial.println(moisture);
 
    if(moisture > MOISTURE_LEVEL) {
        LedState(HIGH); 
          delay(30000);               // turn on water for 30 seconds
        LedState(LOW);
          delay(60000);               // turn off water for 60 seconds

    } else   {
        LedState(LOW);
        delay(1000);
    }
    delay(1000);
}
