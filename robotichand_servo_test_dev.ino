#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5;

// Adjust these if needed
int OPEN_ANGLE  = 10;    // hand open
int CLOSE_ANGLE = 180;   // hand closed

//thumb
int OPEN_ANGLE2  = 10;    // hand open
int CLOSE_ANGLE2 = 180;   // hand closed

 int OPEN_ANGLE3  = 10;    // hand open
int CLOSE_ANGLE3 = 150;   // hand closed

 int OPEN_ANGLE4  = 50;    // hand open
int CLOSE_ANGLE4 = 180;   // hand closed

 int OPEN_ANGLE5  = 180;    // hand open
int CLOSE_ANGLE5 = 10;   // hand closed

void setup() {
  servo1.attach(2);  // thumb
  servo2.attach(3);  // index
  servo3.attach(4);  // middle
  servo4.attach(5);  // ring
  servo5.attach(6);  // pinky
}

void loop() {

  // OPEN HAND
/*
  servo1.write(OPEN_ANGLE);//TH
    delay(20);
  servo2.write(CLOSE_ANGLE2);//TH
  servo3.write(OPEN_ANGLE3);//TH
  servo4.write(CLOSE_ANGLE4);//T 
      delay(90);
  servo5.write(CLOSE_ANGLE5);//T
    delay(5000);
*/
  // CLOSE HAND 
   
/*
  servo1.write(CLOSE_ANGLE);
    
    servo2.write(OPEN_ANGLE2);
      delay(20);
    servo3.write(CLOSE_ANGLE3);

    servo4.write(OPEN_ANGLE4);

   servo5.write(OPEN_ANGLE5);


  delay(5000);
*/
/*
for(int i = 0; i < 181; i++) {
  servo3.write(i);
  if (i == 0) {
    delay(1000);
    continue;
  }
  if (i == 180) {
    delay(1000);
    continue;
  }
  delay(60);
}
*/
int x = 180;
servo1.write(180 - x);
servo2.write(x);
servo3.write(x);
servo4.write(x);
servo5.write(x);
delay(1000);

}
