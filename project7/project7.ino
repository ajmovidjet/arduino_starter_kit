#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440

int buttons[6];
int notes[] = {NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4};

void setup() {
  buttons[0] = 2;
  Serial.begin(9600);
}

void loop() {
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  if(keyVal >= 990 && keyVal < 1010)
  {
    tone(8, notes[0]);
  }
  else if(keyVal >= 950 && keyVal < 990)
  {
    tone(8, notes[1]);
  }
  else if(keyVal >= 670 && keyVal < 710)
  {
    tone(8, notes[2]);
  }
  else if(keyVal >= 900 && keyVal < 950)
  {
    tone(8, notes[3]);
  }
  else if(keyVal >= 500 && keyVal < 530)
  {
    tone(8, notes[4]);
  }
  else if(keyVal >= 5 && keyVal < 15)
  {
    tone(8, notes[5]);
  }
  else
  {
    noTone(8);
  }
}
