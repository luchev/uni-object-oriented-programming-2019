#ifndef FILE_H
#define FILE_H

class File {
protected:
    char * name = nullptr;
    int size = 0;
public:
    File(const char * Name = "", int Size = 0);
    ~File();
    File(const File & file);
    File & operator=(const File & file);

    void setName(const char * Name);
    void setSize(int Size);
    int getSize() const;
    const char * getName() const;
};

#endif