#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "File.h"

class TextFile : public File {
protected:
    char * encoding = nullptr;
public:
    TextFile(const char * Name = "", int Size = 0, const char * Encoding = "");
    ~TextFile();
    TextFile(const TextFile & file);
    TextFile & operator=(const TextFile & file);

    void setEncoding(const char * Encoding);
    const char * getEncoding() const;
};

#endif