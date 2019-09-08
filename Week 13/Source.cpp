#include <iostream>
#include <string>
#include "File.hpp"

int main() {
	string input;
	string output = "Hello\nWorld";
	File::WriteString("test.txt", output);
	File::ReadString("test.txt", input);
	std::cout << input;
}

