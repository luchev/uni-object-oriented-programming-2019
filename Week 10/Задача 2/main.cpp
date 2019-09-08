#include "Tag.h"
#include "SelfClosingTag.h"
#include "SimpleTag.h"
#include <iostream>

int main() {
    Tag tag("Just a Tag");
    std::cout << tag << "\n";
    SelfClosingTag selfclose("Self Closing Tag");
    std::cout << selfclose << "\n";
    SimpleTag simpletag("Simple Tag", "   CONTENT   ");
    std::cout << simpletag << "\n";

}