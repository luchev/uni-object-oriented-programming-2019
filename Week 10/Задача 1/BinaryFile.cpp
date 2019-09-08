#include "BinaryFile.h"

BinaryFile::BinaryFile(const char * Name, int Size, int Version) : File(Name, Size), version(Version) 
{
}

int BinaryFile::getVersion() const {
    return version;
}

void BinaryFile::setVersion(int Version) {
    version = Version;
}