#include <iostream>
#include "Building.h"
#include "House.h"

int main() {
	House a = House(5, 2, 120, 7, "Josh - A");
	House b;
	b.setFloors(1);
	b.setHeight(3);
	b.setOwner("Mark - B");
	b.setRooms(5);
	b.setSqm(300);
	
	std::cout << a;
	std::cout << b;

	std::cout << "House " << (a < b ? "a" : "b") << " has fewer rooms.\n";
	std::cout << "House " << ((Building)a < (Building)b ? "a" : "b") << " has less space.\n";

	return 0;
}
