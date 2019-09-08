#ifndef LINE_H
#define LINE_H
#include <iostream>

class Line {
	private:
		char * data;
		int size;
	public:
		Line(const char * text = "");
		~Line();
		Line(const Line & line);
		Line & operator=(const Line & line);
		
		void SetLine(const char * text = "");
		int getSize() const;
		const char * getData() const;

		friend Line SplitLine(Line & line, int index);
		friend Line ConcatinateLines(Line one, Line two);
};

#endif
