#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(Sensor, in1,    pincherDegreeR, sensorPotentiometer)
#pragma config(Sensor, in2,    pincherDegreeL, sensorPotentiometer)
#pragma config(Sensor, in3,    battery2,       sensorAnalog)
#pragma config(Sensor, dgtl7,  encoderArm,     sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  encoderL,       sensorQuadEncoder)
#pragma config(Sensor, dgtl11, encoderR,       sensorQuadEncoder)
#pragma config(Motor,  port2,           pincher_R,     tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port3,           pincher_L,     tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port4,           armR1,         tmotorVex393_MC29, openLoop, driveRight, encoderPort, dgtl7)
#pragma config(Motor,  port5,           armR2,         tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port6,           armL1,         tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port7,           armL2,         tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port8,           chassis_R,     tmotorVex393_MC29, openLoop, reversed, driveRight, encoderPort, dgtl11)
#pragma config(Motor,  port9,           chassis_L,     tmotorVex393_MC29, openLoop, driveLeft, encoderPort, dgtl9)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "CoreLib.c"
void libSetup()
{
	setChassis(0,port8,dgtl11,0.3,0.0001,1,50);
	setChassis(1,port9,dgtl9,0.3,0.0001,1,50);
	setPincher(0,port2,in1,1050,1500,1800);
	setPincher(1,port3,in2,1050,1550,1950);
	setGyro(in8,140);
}
task main()
{
}
