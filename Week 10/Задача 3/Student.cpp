#include "Student.h"

Student::Student(const char * Name, int FN) : UniPerson(Name) {
    fn = FN;
}
int Student::getFN() const {
    return fn;
}
void Student::setFN(int FN) {
    fn = FN;
}