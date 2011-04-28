#ifndef __DashboardDataFormat_h__
#define __DashboardDataFormat_h__

#include <WPILib.h>

class DashboardDataSender
{
public:
	//DashboardDataSender(Encoder &width, Encoder &height);
  DashboardDataSender();
	void sendVisionData(unsigned rect[4], float desiredAngle, float angleOffset);
	void sendIOPortData(float setpoint, float height, float output, float error, float uo, float angle);
};
#endif // __DashboardDataFormat_h__
