/*
  Example of WITA library.
  Code by Jose Julio and Jordi Mu�oz . 3DRobotics.com

*/

#include <WITA.h> // ArduPilot Mega RC Library

void setup()
{
  WITA.LedOn();
  WITA.LedBlink(5, false);
  WITA.InitServos();   // Servos initialization
  delay(1000);
}
void loop()
{
int i;

  for (i=0;i<500;i++)
	{
	WITA.Servo(0,1000+i*2);
	delay(50);
	}
}
  
