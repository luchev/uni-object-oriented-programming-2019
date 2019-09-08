#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include "Directory.h"

class FileSystem {
    Directory root;
public:
    void addSubDirectory(const Directory & dir);
};
#endif