#include <Mirobot.h>

Mirobot mirobot;

void setup(){
  mirobot.begin(2);
  mirobot.enableSerial();
}

void loop(){
  mirobot.loop();
}
