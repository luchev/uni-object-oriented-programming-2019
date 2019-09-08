#include "Phone.h"
#include "SmartDevice.h"
#include <iostream>

class SmartPhone : public SmartDevice, public Phone {
protected:
  int CameraResolution;
public:
  SmartPhone(int pn, int ram, const char * name, int screenSize, int number, int cameraResolution);
  int getCameraResolution() const;
  void setCameraResolution(int cameraResolution);
  void Print() const;
};
