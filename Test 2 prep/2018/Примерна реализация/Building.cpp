#include "Building.h"

Building::Building(unsigned int Height, unsigned int Floors, unsigned int Sqm) : height(Height), floors(Floors), sqm(Sqm)
{
}

void Building::setHeight(unsigned int Height)
{
	height = Height;
}

void Building::setSqm(unsigned int Sqm)
{
	sqm = Sqm;
}

void Building::setFloors(unsigned int Floors)
{
	floors = Floors;
}

unsigned int Building::getHeight() const
{
	return height;
}

unsigned int Building::getSqm() const
{
	return sqm;
}

unsigned int Building::getFloors() const
{
	return floors;
}

unsigned int Building::getTotalArea() const
{
	return floors * sqm;
}

bool Building::operator<(const Building & AnotherBuilding) const
{
	return getTotalArea() < AnotherBuilding.getTotalArea();
}

std::ostream& operator<<(std::ostream& os, const Building & Build)
{
	os << "Height: " << Build.getHeight() << "\n"
		<< "One floor sqm: " << Build.getSqm() << "\n"
		<< "Number of floors: " << Build.getFloors() << "\n";
	return os;
 }
