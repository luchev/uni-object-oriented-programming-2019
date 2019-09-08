#include "Line.h"
#include <iostream>
#include "Text.h"

int main() {
	Line a = "Hello world";
	Line b = SplitLine(a, 5);
	//std::cout << a.getData() << '\n';
	//std::cout << b.getData() << '\n';
	Line c = ConcatinateLines(a, b);
	//std::cout << c.getData();
	Text t;
	t.AddLine("Hello");
	t.AddLine("World");
	t.PrintText();
}
