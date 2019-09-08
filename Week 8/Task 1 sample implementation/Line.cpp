#include "Line.h"
#include <cstring>

Line::Line(const char * text) {
	size = strlen(text);
	data = new char[size + 1];
	strcpy(data, text);
}

Line::~Line() {
	delete[] data;
}

Line::Line(const Line & line) {
	size = line.size;
	data = new char[size + 1];
	strcpy(data, line.data);
}

Line & Line::operator=(const Line & line) {
	if (this != &line) {
		delete[] data;
		size = line.size;
		data = new char[size + 1];
		strcpy(data, line.data);
	}
	return *this;
}

void Line::SetLine(const char * text) {
	delete[] data;
	size = strlen(text);
	data = new char[size + 1];
	strcpy(data, text);
}

int Line::getSize() const {
	return size;
}

const char * Line::getData() const {
	return data;
}

Line SplitLine(Line & line, int index) {
	Line second = (line.data + index);
	char* newLineOne = new char[index + 1];
	for (int i = 0; i < index; i++) {
		newLineOne[i] = line.data[i];
	}
	line.size = index;
	newLineOne[index] = 0;
	delete[] line.data;
	line.data = newLineOne;
	return second;
}

Line ConcatinateLines(Line one, Line two) {
	Line newLine;
	newLine.size = one.size + two.size;
	newLine.data = new char[newLine.size + 1];
	for (int i = 0; i < one.size; i++) {
		newLine.data[i] = one.data[i];
	}
	for (int i = one.size, j = 0; j < two.size; i++, j++) {
		newLine.data[i] = two.data[j];
	}
	newLine.data[newLine.size] = 0;
	return newLine;
}
