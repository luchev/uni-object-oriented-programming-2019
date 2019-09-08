#include "Assistant.h"

Assistant::Assistant(const char * Name, int FN, int Course) : Student(Name, FN) {
    course = Course;
}
int Assistant::getCourse() const {
    return course;
}
void Assistant::setCourse(int Course) {
    course = Course;
}