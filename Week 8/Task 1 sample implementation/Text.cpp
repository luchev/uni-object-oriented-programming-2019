#include <iostream>
#include "Text.h"

Text::Text() : size(0) {
	lines = new Line[size];
}

Text::~Text() {
	delete[] lines;
}

Text::Text(const Text & text) : size(text.size) {
	lines = new Line[size];
	for (int i = 0; i < size; i++) {
		lines[i] = text.lines[i];
	}
}

Text & Text::operator=(const Text & text) {
	if (this != &text) {
		size = text.size;
		delete[] lines;
		lines = new Line[size];
		for (int i = 0; i < size; i++) {
			lines[i] = text.lines[i];
		}
	}
	return *this;
}

void Text::AddLine(const Line & line) {
	size++;
	Line* newLines = new Line[size];
	for (int i = 0; i < size - 1; i++) {
		newLines[i] = lines[i];
	}
	newLines[size - 1] = line;
	delete[] lines;
	lines = newLines;
}

void Text::PrintText() {
	for (int i = 0; i < size; i++) {
		std::cout << lines[i].getData() << '\n';
	}
}
