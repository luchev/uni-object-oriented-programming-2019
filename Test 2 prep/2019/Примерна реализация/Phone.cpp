#include "Phone.h"
#include <cstring>
#include <iostream>

Phone::Phone(const char * name, int screenSize, int number) : Number(number), ScreenSize(screenSize) {
  setName(name);
}

Phone::~Phone() {
  delete[] Name;
}

Phone::Phone(const Phone & rhs) : Number(rhs.Number), ScreenSize(rhs.ScreenSize) {
  setName(rhs.Name);
}

Phone & Phone::operator=(const Phone & rhs) {
  if (this != &rhs) {
    Number = rhs.Number;
    ScreenSize = rhs.ScreenSize;
    setName(rhs.Name);
  }
  return *this;
}

const char * Phone::getName() const {
  return Name;
}

int Phone::getScreenSize() const {
  return ScreenSize;
}

int Phone::getNumber() const {
  return Number;
}

void Phone::setName(const char * name) {
  if (name == nullptr) {
    setName("");
  }
  if (name ==  Name) {
    return;
  }
  delete[] Name;
  Name = new char[strlen(name) + 1];
  strcpy(Name, name);
}

void Phone::setScreenSize(int screenSize) {
  ScreenSize = screenSize;
}

void Phone::setNumber(int number) {
  Number = number;
}

void Phone::Call(const Phone & phone) const {
  std::cout << "Calling " << phone.Number << "\n";
}

void Phone::Print() const {
  std::cout << "Phone " << Name << " Screen Size: " << ScreenSize << " Number: " << Number << "\n";
}
