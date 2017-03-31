#pragma config(Motor,  port2,           armL_B,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           armL_F,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           pincherR,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           armR_B,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           armR_F,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           pincherL,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           chassisL,      tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           chassisR,      tmotorVex393HighSpeed_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void armDrive(int speed)
{
	motor[armR_F]=speed;
	motor[armL_F]=speed;
	motor[armR_B]=speed;
	motor[armL_F]=speed;
}

void pincherDrive(int speed)
{
	motor[pincherR]=speed;
	motor[pincherL]=speed;
}
task main()
{
  while(true) // Space between while (true) deleted
  {
    motor[chassisR]= vexRT[Ch2]*0.98;
    motor[chassisL] = vexRT[Ch3]*0.98;

    if(vexRT[Btn6U] ==1)
    {
      armDrive(125);
    }

    else if(vexRT[Btn6D]==1)
    {
      armDrive(-100);
    }

    else
    {
      armDrive(0);
    }

    if(vexRT[Btn5U] ==1)
    {
      pincherDrive(125);
    }

    else if(vexRT[Btn5D]==1)
    {
      pincherDrive(-125);
    }
    else
    {
      pincherDrive(0);
    }
  }
}
