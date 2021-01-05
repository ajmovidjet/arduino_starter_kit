int switchState = 0;


void setup() {
  pinMode(3, OUTPUT); // green led
  pinMode(4, OUTPUT); // red led 1
  pinMode(5, OUTPUT); // red led 2
  pinMode(2, INPUT); // switch
}

void loop() {
  switchState = digitalRead(2);
  if(switchState == LOW) {
    // button is not pressed
    digitalWrite(3, HIGH); // green led on
    digitalWrite(4, LOW); // red led 1 off
    digitalWrite(5, LOW); // red led 2 off
  } else {
    // button is pressed
    digitalWrite(3, LOW); // green led off
    digitalWrite(4, LOW); // red led 1 off
    digitalWrite(5, HIGH); // red led 2 on
    delay(250);
    digitalWrite(4, HIGH); // red led 1 on
    digitalWrite(5, LOW); // red led 2 off
    delay(250);
  }
}
