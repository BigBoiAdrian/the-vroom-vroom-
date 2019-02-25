#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_cm)
#pragma config(Sensor, dgtl12, Red,          sensorNone)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
task main()

{

	while(1 == 1)
{
	(SensorValue(sonar) >26);
	{
		startMotor(leftMotor, 100);
		startMotor(rightMotor, 100);
}
	}
	(SensorValue(sonar) <25);
	{
		startMotor(leftMotor, 0);
		startMotor(rightMotor, 0);
		//wait(4.5)
		//startMotor(leftMotor, 100);      //trun right
		//startMotor(rightMotor, -100);
		//wait(1.5)
		//startMotor(leftMotor, 0);        //stop right turn
		//startMotor(rightMotor, 0);
		//wait(2.0)
		//startMotor(leftMotor, 100);      //go straight
		//startMotor(rightMotor, 100);
		//wait(2.0)
		//startMotor(leftMotor, -100);     //turn left
		//startMotor(rightMotor, 100);
		//wait(1.5)
		//startMotor(leftMotor, 100);      //go straight
		//startMotor(rightMotor, 100)
		//wait(2.0)
		//startMotor(leftMotor, -100);     //turn left
		//startMotor(rightMotor, 100);
		//wait(1.5)
		//startMotor(leftMotor, 100);      //go straight
		//startMotor(rightMotor, 100);
		//wait(2.0)
		//startMotor(leftMotor, 100);      //trun right
		//startMotor(rightMotor, -100);
		//wait(1.5)
	}

	while(1 == 1)
	{
		if (SensorValue(lightSensor)>700)
		{
			turnFlashlightOn(flashlight, 127);
		}
		if (SensorValue(lightSensor) <= 700)
		{
			turnFlashlightOff(flashlight);
		}
}

	while(1 == 1)
	{
		(SensorValue(lineFollower) >2900);
		{
			startMotor(leftMotor, 0);
			startMotor(rightMotor, 0);
		}
		(SensorValue(lineFollower) <2800);
		{
			startMotor(leftMotor, 63);
			startMotor(rightMotor, 63);
		}
	}
	while(1 == 1)
	{
		if(motor(leftMotor) == 0)
		{
			turnLEDOn(Red);
		}
		else(motor(leftMotor) > 0);
		{
			turnLEDOff(Red);
		}
}











	}
