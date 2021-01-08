const int switchPin = 8;
unsigned long prevTime = 0;
int switchState = 0;
int prevSwitchState = 0;
int led = 2;
long interval = 250;

void setup() {
  for(int x = 2; x < 8; x++)
  {
    pinMode(x, OUTPUT);
  }
  pinMode(switchPin, INPUT);
}

void restart(unsigned long currTime) {
    for(int x = 7; x >= 2; x--){
      digitalWrite(x, LOW);
      delay(interval);
    }
    led = 2;
    prevTime = currTime;
    prevSwitchState = switchState;
}

void loop() {
  unsigned long currTime = millis();
  if(currTime - prevTime > interval) {
    prevTime = currTime;
    digitalWrite(led, HIGH);
    led++;
    if(led == 9) {
      // end1
      // restart(currTime);
    }
  }
  switchState = digitalRead(switchPin);
  // restart
  if(switchState != prevSwitchState) {
    restart(currTime);
  }
}
