#include <Servo.h>

Servo NovaServo_1; // 70-120° Head Movement - Front and Back
Servo NovaServo_2; // 0-180° Head Rotation - Clockwise and Anticlockwise
Servo NovaServo_3; // 0-180° Head Rotation - Up and Down
Servo NovaServo_4; // 0-180° Whole Body Rotation - Z axis
Servo NovaServo_5; // 80-130° Head Movement - Up and Down

void setup() {
  
  NovaServo_1.attach(32);
  NovaServo_2.attach(34);
  NovaServo_3.attach(36);
  NovaServo_4.attach(38);
  NovaServo_5.attach(40);
}

void loop() {
  
  NovaServo_1.write(105);
  //NovaServo_2.write(90);
  //NovaServo_3.write(90);
  NovaServo_4.write(85);
  //NovaServo_5.write(85);
  /*int x = 1;
  int timer = 45;
  for (int i = 50; i > 49; i = i + x){
        NovaServo_2.write(i);
        NovaServo_3.write(i);
        NovaServo_4.write(i);
        if (i < 90) timer = timer - x;
        if (i > 90) timer = timer + x;
        if (i == 130) x = -1;      // switch direction at peak
        delay(timer);
  }*/
}
