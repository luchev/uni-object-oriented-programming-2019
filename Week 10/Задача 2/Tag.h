#ifndef TAG_H
#define TAG_H

#include <iostream>

class Tag {
    char * name = nullptr;
public:
    Tag(const char * Name);
    ~Tag();
    Tag(const Tag & tag);
    Tag & operator=(const Tag & tag);

    void setName(const char * Name);
    const char * getName() const;

    friend std::ostream& operator<<(std::ostream& os, const Tag& tag);
};

#endif