#pragma once
#include <iostream>
class Building {
private:
	unsigned int height;
	unsigned int floors;
	unsigned int sqm;
public:
	Building(unsigned int Height = 0, unsigned int Floors = 0, unsigned int Sqm = 0);
	void setHeight(unsigned int Height);
	void setSqm(unsigned int Sqm);
	void setFloors(unsigned int Floors);
	unsigned int getHeight() const;
	unsigned int getSqm() const;
	unsigned int getFloors() const;
	unsigned int getTotalArea() const;
	bool operator<(const Building& AnotherBuilding) const;
};
std::ostream& operator<<(std::ostream& os, const Building& Build);
