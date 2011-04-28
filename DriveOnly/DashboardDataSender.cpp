#include "DashboardDataSender.h"
#include "WPILib.h"

DashboardDataSender::DashboardDataSender() {
}

void DashboardDataSender::sendVisionData(unsigned rect[4], float desiredAngle, float angleOffset) {
  Dashboard &dash = DriverStation::GetInstance()->GetHighPriorityDashboardPacker();
  dash.AddCluster();
  {
    dash.AddU32(rect[0]); // x
    dash.AddU32(rect[1]); // y
    dash.AddU32(rect[2]); // width
    dash.AddU32(rect[3]); // height
    dash.AddFloat(desiredAngle);
    dash.AddFloat(angleOffset);
  }
  dash.FinalizeCluster();
  dash.Finalize();
}

void DashboardDataSender::sendIOPortData(float setpoint, float height, float output, float error, float uo, float angle) {
  //DashboardDataSender *self = reinterpret_cast<DashboardDataSender*>(s);
	Dashboard &dash = DriverStation::GetInstance()->GetLowPriorityDashboardPacker();
	dash.AddCluster();
	{
		dash.AddCluster();
		{ //analog modules 
			dash.AddCluster();
			{
				for (int i = 1; i <= 8; i++) {
					dash.AddFloat((float) AnalogModule::GetInstance(1)->GetAverageVoltage(i));
				}
			}
			dash.FinalizeCluster();
		}
		dash.FinalizeCluster();

		dash.AddCluster();
		{ //digital modules
			dash.AddCluster();
			{
				dash.AddCluster();
				{
					int module = 4;
					dash.AddU8(DigitalModule::GetInstance(module)->GetRelayForward());
					dash.AddU8(DigitalModule::GetInstance(module)->GetRelayReverse());
					UINT16 dio = 0;
					for (unsigned i = 0; i < 14; ++i) {
					  if (DigitalModule::GetInstance(module)->GetDIO(i + 1))
					    dio |= (1 << i);
					}
					dash.AddU16(dio);
					dash.AddU16(DigitalModule::GetInstance(module)->GetDIODirection());
					dash.AddCluster();
					{
						for (int i = 1; i <= 10; i++) {
							dash.AddU8((unsigned char) DigitalModule::GetInstance(module)->GetPWM(i));
						}
					}
					dash.FinalizeCluster();
				}
				dash.FinalizeCluster();
			}
			dash.FinalizeCluster();
		}
		dash.FinalizeCluster();

		// Can't read solenoids without an instance of the object
		// dash.AddU8((char) 0);

		dash.AddFloat(setpoint);
		dash.AddFloat(height);
		dash.AddFloat(output);
		dash.AddFloat(error);
		dash.AddFloat(uo);
		dash.AddFloat(angle);
	}
	dash.FinalizeCluster();
	dash.Finalize();
}
