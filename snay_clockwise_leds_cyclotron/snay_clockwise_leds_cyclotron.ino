const int delayTime = 1;
int pins[] = {3,9,10,11};
int fadeAmount = 1;

void setup() {
  for(int index = 0; index < sizeof(pins); index++) {
    pinMode(pins[index], OUTPUT);
  }
}

void loop() {
  
  for(int index = 0; index < (sizeof(pins)/sizeof(pins[0])); index++) {
    for (int brightness = 0; brightness <= 255; brightness ++) {
      analogWrite(pins[index], brightness);
      delay(delayTime);
    }

    delay(500);
    for (int brightness = 255; brightness >= 0; brightness-- ) {
      analogWrite(pins[index], brightness);
      delay(delayTime);
    }
  }
}
