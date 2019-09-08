#include "Directory.h"

Directory::Directory(const char * Name, int Size, int NumberOfFiles) : File(Name, Size), numberOfFiles(NumberOfFiles) {

}

Directory::~Directory() {
    for (int i = 0; i < subdirs.size(); i++) {
        delete subdirs[i];
    }
}
Directory::Directory(const Directory & dir) : File(dir) {
    numberOfFiles = dir.numberOfFiles;
    for (int i = 0; i < dir.subdirs.size(); i++) {
        subdirs.push_back(new Directory( * dir.subdirs[i]));
    }
}
Directory & Directory::operator=(const Directory & dir) {
    if (this != &dir) {
        for (int i = 0; i < subdirs.size(); i++) {
            delete subdirs[i];
        }
        subdirs.clear();
        for (int i = 0; i < dir.subdirs.size(); i++) {
           subdirs.push_back(new Directory( * dir.subdirs[i]));
        }
    }
    return *this;
}

int Directory::getNumberOfFiles() const {
    return numberOfFiles;
}

void Directory::setNumberOfFiles(int number) {
    numberOfFiles = number;
}

void Directory::addSubDirectory(const Directory & dir) {
    subdirs.push_back(new Directory(dir));
}