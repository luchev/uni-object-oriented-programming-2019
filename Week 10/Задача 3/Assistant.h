#ifndef ASSISTANT_H
#define ASSISTANT_H
#include "Student.h"

class Assistant : public Student {
    int course;
public:
    Assistant(const char * Name = "", int FN = 0, int Course = 0);
    int getCourse() const;
    void setCourse(int Course);
};

#endif