#include "SmartPhone.h"
#include <iostream>

SmartPhone::SmartPhone(int pn, int ram, const char * name, int screenSize, int number, int cameraResolution) : SmartDevice(ram),  Phone(name, screenSize, number) {
  CameraResolution = cameraResolution;
}

int SmartPhone::getCameraResolution() const {
  return CameraResolution;
}

void SmartPhone::setCameraResolution(int cameraResolution) {
  CameraResolution = cameraResolution;
}

void SmartPhone::Print() const {
  SmartDevice::Print();
  Phone::Print();
}
