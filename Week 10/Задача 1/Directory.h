#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "File.h"
#include <vector>

class Directory : public File {
protected:
    int numberOfFiles = 0;
    std::vector<Directory *> subdirs;
public:
    Directory(const char * Name = "", int Size = 0, int NumberOfFiles = 0);
    ~Directory();
    Directory(const Directory & dir);
    Directory & operator=(const Directory & dir);

    int getNumberOfFiles() const;
    void setNumberOfFiles(int number);
    void addSubDirectory(const Directory & dir);
};

#endif