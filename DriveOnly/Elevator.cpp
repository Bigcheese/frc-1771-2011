/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.               */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#include "Elevator.h"
#include "GenericHID.h"
#include "Utility.h"
#include "WPIStatus.h"
#include <math.h>
#include "Joystick.h"
#include "WPILib.h"
#include "Notifier.h"

Elevator::Elevator(int jag1)
  : jag1(jag1)
  , HeightEnc(11,12)
  , heightUpdater(Elevator::UpdateElevator,this)
  , moveElevator(Elevator::changeHeight,this)

{   
  HeightEnc.SetDistancePerPulse(0.0031298904538341);
  HeightEnc.Start();
  heightUpdater.StartPeriodic(.05);
}

Elevator::~Elevator()
{
 
}


void Elevator::Spin(float speed)
{
  jag1.Set(speed, 0);

}

void Elevator::SpinManual(float speed)
{
  jag1.Set(speed,0);
}

 void Elevator::UpdateElevator(void *s) {
   Elevator *self = reinterpret_cast<Elevator*>(s);
   float current = self->HeightEnc.GetDistance();
  printf("H: %f\n", current);
  self->currentHeight = self->HeightEnc.GetDistance();    
 }

 int Elevator::goToPos(int pos) //0 -4. 0 is bottom 4 is top
   {
    // DriveOnly *self = reinterpret_cast<DriveOnly*>(s);    
     float desiredPosition = -20.1784; 
     float distanceApart = (desiredPosition - currentHeight);
     distanceApart*=-1;
    // printf("Height: %f\n",currentHeight);
     printf("DistanceApart: %f\n", distanceApart);
   //  float currentPos = HeightEnc.GetDistance();

     
     //upDown.Set(.8);
     while(distanceApart >= 20)
     {
      
       distanceApart = (desiredPosition - currentHeight);
       distanceApart*=-1;
       printf("DistanceApart: %f\n", distanceApart);
       Spin(1);
      }
     while(distanceApart <= 3)
     {
    
            distanceApart = (desiredPosition - currentHeight);
            distanceApart*=-1;
            printf("DistanceApart: %f\n", distanceApart);
            Spin(.8);
     }
     while(distanceApart <= 1)
     {
      // printf("Distance Apart: %f\n",distanceApart);
      // printf("H: %f\n",currentHeight);
            distanceApart = (desiredPosition - currentHeight);
            distanceApart*=-1;
            printf("DistanceApart: %f\n", distanceApart);
            Spin(.45);
     }
     
     while(distanceApart <= .1)
     {
       Spin(0);
       
     }
     
     return 1;

   }

 void Elevator::changeHeight(void *s)
 {
   Elevator *self = reinterpret_cast<Elevator*>(s);
   self->goToPos(4);   
 }
 
 void Elevator::startChange()
 {
   moveElevator.StartSingle(0);
 }
