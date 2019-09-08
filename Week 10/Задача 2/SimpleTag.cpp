#include "SimpleTag.h"
#include <cstring>

SimpleTag::SimpleTag(const char * Name, const char * Content) : Tag(Name) {
    setContent(Content);
}
SimpleTag::~SimpleTag() {
    delete[] content;
}
SimpleTag::SimpleTag(const SimpleTag & tag) : Tag(tag) {
    setContent(tag.content);
}
SimpleTag & SimpleTag::operator=(const SimpleTag & tag) {
    if (this != &tag) {
        Tag::operator=(tag);
        setContent(tag.content);
    }
    return *this;
}

void SimpleTag::setContent(const char * Content) {
    if (Content != nullptr && Content != content) {
        delete[] content;
        content = new char[strlen(Content) + 1];
        strcpy(content, Content);
    }
}
const char * SimpleTag::getContent() const {
    return content;
}

std::ostream& operator<<(std::ostream& os, const SimpleTag& tag) {
    os << "<" << tag.getName() << ">" << tag.content << "</" << tag.getName() << ">";
    return os;
}