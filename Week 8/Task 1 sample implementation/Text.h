#ifndef TEXT_H
#define TEXT_H
#include "Line.h"

class Text {
	private:
		Line * lines;
		int size;
	public:
		Text();
		~Text();
		Text(const Text & text);
		Text & operator=(const Text & text);
		
		void AddLine(const Line & line);
		void PrintText();
		
};


#endif
