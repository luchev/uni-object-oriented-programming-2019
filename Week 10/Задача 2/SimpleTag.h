#include "Tag.h"

class SimpleTag : public Tag {
    char * content = nullptr;
public:
    SimpleTag(const char * Name, const char * Content);
    ~SimpleTag();
    SimpleTag(const SimpleTag & tag);
    SimpleTag & operator=(const SimpleTag & tag);

    void setContent(const char * Content);
    const char * getContent() const;

    friend std::ostream& operator<<(std::ostream& os, const SimpleTag& tag);
};