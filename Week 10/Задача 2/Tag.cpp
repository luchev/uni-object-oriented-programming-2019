#include "Tag.h"
#include <cstring>
#include <iostream>

Tag::Tag(const char * Name) {
    setName(Name);
}

Tag::~Tag() {
    delete[] name;
}

Tag::Tag(const Tag & tag) {
    setName(tag.name);
}

Tag & Tag::operator=(const Tag & tag) {
    if (this != &tag) {
        setName(tag.name);
    }
    return *this;
}

void Tag::setName(const char * Name) {
    if (Name != nullptr && Name != name) {
        delete[] name;
        name = new char[strlen(Name) + 1];
        strcpy(name, Name);
    }
}
const char * Tag::getName() const {
    return name;
}

std::ostream& operator<<(std::ostream& os, const Tag& tag) {
    os << "<" << tag.name << ">";
    return os;
}