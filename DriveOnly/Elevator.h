#ifndef Elevator_H_
#define Elevator_H_

#include "Base.h"
#include <vector>
#include <stdlib.h>
#include <vxWorks.h>
#include "WPILib.h"

class Elevator
{
  
public:
  Elevator(int jag1);
  ~Elevator();
  void Spin(float speed);
  void SpinManual(float speed);
  //void UpdateEncoder(void *);
  static void UpdateElevator(void *);
  static void changeHeight(void *);
  int goToPos(int pos);
  void startChange();
  
  
  

private:
CANJaguar jag1;
Encoder HeightEnc;
Notifier heightUpdater;
Notifier moveElevator;
float currentHeight;

};

#endif

