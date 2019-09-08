#include "File.h"
#include <cstring>

File::File(const char * Name, int Size) : size(Size) {
    setName(Name);
}
File::~File() {
    delete[] name;
}
File::File(const File & file) : size(file.size) {
    setName(file.name);
}
File & File::operator=(const File & file) {
    if (this != &file) {
        setName(file.name);
        setSize(file.size);
    }
    return *this;
}

void File::setName(const char * Name) {
    if (Name != nullptr && Name != this->name) {
        delete[] name;
        name = new char[strlen(Name) + 1];
        strcpy(name, Name);
    }
}
void File::setSize(int Size) {
    size = Size;
}
int File::getSize() const {
    return size;
}
const char * File::getName() const {
    return name;
}