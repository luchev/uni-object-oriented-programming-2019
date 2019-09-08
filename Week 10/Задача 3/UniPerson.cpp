#include "UniPerson.h"
#include <cstring>

UniPerson::UniPerson(const char * Name) {
    name = nullptr;
    setName(Name);
}
UniPerson::~UniPerson() {
    delete[] name;
}
UniPerson::UniPerson(const UniPerson & person) {
    setName(person.name);
}
UniPerson & UniPerson::operator=(const UniPerson & person) {
    if (this != &person) {
        setName(person.name);
    }
    return *this;
}
void UniPerson::setName(const char * Name) {
    if (Name != nullptr && Name != name) {
        delete[] name;
        name = new char[strlen(Name) + 1];
        strcpy(name, Name);
    }
}
const char * UniPerson::getName() const {
    return name;
}