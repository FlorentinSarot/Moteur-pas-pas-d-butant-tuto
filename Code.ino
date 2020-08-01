#include <Stepper.h>

int stepCount = 0;
Stepper Moteur=Stepper(5,6,7);

void setup(){
  Serial.begin(9600);

}
void loop() {
  Moteur.step(2000);
  Serial.print("steps:");
  Serial.print(-stepCount);
  stepCount++;
  delay(0);
}