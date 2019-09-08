#include "TextFile.h"
#include <cstring>

TextFile::TextFile(const char * Name, int Size, const char * Encoding) : File(Name, Size) {
    setEncoding(Encoding);
}
TextFile::~TextFile() {
    delete[] encoding;
}
TextFile::TextFile(const TextFile & file) : File(file) {
    setEncoding(file.encoding);
}
TextFile & TextFile::operator=(const TextFile & file) {
    if (this != &file) {
        File::operator=(file);
        setEncoding(file.encoding);
    }
    return *this;
}

void TextFile::setEncoding(const char * Encoding) {
    if (Encoding != nullptr && Encoding != encoding) {
        delete[] encoding;
        encoding = new char[strlen(Encoding) + 1];
        strcpy(encoding, Encoding);
    }
}
const char * TextFile::getEncoding() const {
    return encoding;
}