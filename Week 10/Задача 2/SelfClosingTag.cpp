#include "SelfClosingTag.h"

SelfClosingTag::SelfClosingTag(const char * Name) : Tag(Name) {
    
}

std::ostream& operator<<(std::ostream& os, const SelfClosingTag& tag) {
    os << "<" << tag.getName() << " />";
    return os;
}