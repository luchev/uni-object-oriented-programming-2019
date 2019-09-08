#include "Tag.h"

class SelfClosingTag : public Tag {
public:
    SelfClosingTag(const char * Name);
    friend std::ostream& operator<<(std::ostream& os, const SelfClosingTag& tag);
};
