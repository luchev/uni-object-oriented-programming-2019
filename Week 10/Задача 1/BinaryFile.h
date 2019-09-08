#ifndef BINARYFILE_H
#define BINARYFILE_H
#include "File.h"

class BinaryFile : public File {
protected:
    int version;
public:
    BinaryFile(const char * Name = "", int Size = 0, int Version = 1);
    int getVersion() const;
    void setVersion(int Version);
};

#endif