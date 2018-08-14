# Nova
An artificial intelligence robot with improvement capabilities.

# Tips with servo motors calibration
Prior to assembling, Creoqode recommends to connect each servo to pin 46 of the servo shield. The servo is calibrated to 90° when you can hear the shaft. Personnaly I am no sure of what it means. You can try to connect, disconnect the pins until you hear the motor is blocked to 90° but you will find out that did not calibrate them, at all.
When you connect each servo to its pins, when switching on the power everything messes around.
Before assembling, upload the Arduino sketch with the positionnning at 90 instructions: NovaServo_x.write(90);

Connect each motor one after the other to its dedicated pin to find the correct angle at which you should assemble the small metallic part. Then put everyhing together.

When you will run your first code, your Nova will behave like a good little soldier this time.

