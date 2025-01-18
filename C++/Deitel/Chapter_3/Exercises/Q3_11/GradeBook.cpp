#include "GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook(string name, string instructor) {
  setCourseName(name);
  setInstructorName(instructor);
}

void GradeBook::setCourseName(string name) { courseName = name; }

void GradeBook::setInstructorName(string name) { instructorName = name; }

string GradeBook::getCourseName() { return courseName; }

string GradeBook::getInstructorName() { return instructorName; }

void GradeBook::displayMessage() {
  cout << "Welcome to the grade book for\n"
       << getCourseName() << "!\n\n"
       << "This course is presented by\n"
       << getInstructorName() << endl;
}
