#ifndef STUDENT_H
#define STUDENT_H
#include "UniPerson.h"

class Student : public UniPerson {
    int fn;
public:
    Student(const char * Name = "", int FN = 0);
    int getFN() const;
    void setFN(int FN);
};

#endif