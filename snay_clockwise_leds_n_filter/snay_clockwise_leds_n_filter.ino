const int delayTime = 20;
int pins[] = {2,3,4,5,6,7,8,9,10,11,12,13};

void setup() {
  for(int index = 0; index < sizeof(pins); index++) {
    pinMode(pins[index], OUTPUT);
  }
}

void loop() {
  
  for(int index = 0; index < (sizeof(pins)/sizeof(pins[0])); index++) {
    digitalWrite(pins[index], HIGH);
    delay(delayTime);
    digitalWrite(pins[index], LOW);
  }
}
