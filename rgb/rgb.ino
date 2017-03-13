// http://tiny.cc/rgb123

#include <math.h>
 
#ifndef M_PI
#define M_PI 3.1415
#endif

const int redPin   =  3;
const int bluePin  =  4;
const int greenPin =  5;

float f = 0.0;

int redPulse, bluePulse, greenPulse;

void lit() {
  analogWrite(redPin,   redPulse);
  analogWrite(bluePin,  bluePulse);
  analogWrite(greenPin, greenPulse);
}

void setup() {
  pinMode(redPin,   OUTPUT);
  pinMode(bluePin,  OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Add 1.0 to ensure all values are positive
  redPulse   = sin( (f        ) * M_PI / 180.0) + 1.0;
  bluePulse  = sin( (f + 180.0) * M_PI / 180.0) + 1.0;
  greenPulse = sin( (f + 270.0) * M_PI / 180.0) + 1.0;
  lit();
  f += 1.0;
  delay(1);
}
