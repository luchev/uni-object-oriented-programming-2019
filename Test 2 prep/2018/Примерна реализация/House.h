#pragma once
#include "Building.h"
#include <iostream>

class House : public Building {
private:
	unsigned int rooms;
	char* owner;
public:
	House(unsigned int Height = 0, unsigned int Floors = 0, unsigned int Sqm = 0, unsigned int Rooms = 0, const char* Owner = "");
	~House();
	House(const House& AnotherHouse);
	House& operator=(const House& AnotherHouse);
	void setRooms(unsigned int Rooms);
	void setOwner(const char* Owner);
	unsigned int getRooms() const;
	const char* getOwner() const;
	bool operator<(const House& AnotherHouse) const;
};

std::ostream& operator<<(std::ostream& os, const House& Hous);
