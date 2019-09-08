#include "SmartDevice.h"
#include <iostream>

SmartDevice::SmartDevice(int ram) : RAM(ram) {
  PN = GenerateID();
}

int SmartDevice::getPN() const {
  return PN;
}

int SmartDevice::getRAM() const {
  return RAM;
}

void SmartDevice::setRAM(int ram) {
  RAM = ram;
}

void SmartDevice::Print() const {
  std::cout << "PN: " << PN << " RAM: " << RAM << "\n";
}

int GenerateID() {
  static int id = 0;
  return id++;
}

int getSpeed() const {
  return Speed;
}

int getCores() const {
  return Cores;
}

void setCores(int cores) {
  Cores = cores;
}

void setSpeed(int speed) {
  Speed = speed;
}
