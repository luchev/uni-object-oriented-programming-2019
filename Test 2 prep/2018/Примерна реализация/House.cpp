#include "House.h"
#include <cstring>
#pragma warning(disable:4996)

House::House(unsigned int Height, unsigned int Floors, unsigned int Sqm, unsigned int Rooms, const char * Owner) : Building(Height, Floors, Sqm), rooms(Rooms)
{
	owner = new char[strlen(Owner) + 1];
	strcpy(owner, Owner);
}

House::~House()
{
	delete[] owner;
}

House::House(const House & AnotherHouse) : Building(AnotherHouse), rooms(AnotherHouse.rooms)
{
	owner = new char[strlen(AnotherHouse.owner) + 1];
	strcpy(owner, AnotherHouse.owner);
}

House& House::operator=(const House & AnotherHouse)
{
	if (this != &AnotherHouse) {
		setHeight(AnotherHouse.getHeight());
		setFloors(AnotherHouse.getFloors());
		setSqm(AnotherHouse.getSqm());
		setRooms(AnotherHouse.getRooms());
		setOwner(AnotherHouse.getOwner());
	}
	return *this;
}

void House::setRooms(unsigned int Rooms)
{
	rooms = Rooms;
}

void House::setOwner(const char * Owner)
{
	delete[] owner;
	owner = new char[strlen(Owner) + 1];
	strcpy(owner, Owner);
}

unsigned int House::getRooms() const
{
	return rooms;
}

const char * House::getOwner() const
{
	return owner;
}

bool House::operator<(const House & AnotherHouse) const
{
	return rooms < AnotherHouse.rooms;
}

std::ostream & operator<<(std::ostream & os, const House & Hous)
{
	os << "Owner: " << Hous.getOwner() << "\n"
		<< "One floor sqm: " << Hous.getSqm() << "\n"
		<< "Number of rooms: " << Hous.getRooms() << "\n";
	return os;
}
