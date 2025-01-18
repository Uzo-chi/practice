#include "GradeBook.h"
#include <iostream>
using namespace std;

int main() {
  GradeBook gradeBook1("CSC201 Computer Programming 1",
                       "Dr. Bello Moses Eromsele");

  // Display initial course and instructor name
  cout << "gradeBook1's Course name:\n" << gradeBook1.getCourseName() << endl;
  cout << "\ngradeBook1's Instructor name:\n"
       << gradeBook1.getInstructorName() << endl;

  // Change gradeBook1's course and instructor names
  gradeBook1.setCourseName("SEN292 Nature of Human Beings");
  gradeBook1.setInstructorName("Dr. Celestine Kezie");

  // Display new course and instructor name
  cout << "\ngradeBook1's new Course name:\n"
       << gradeBook1.getCourseName() << endl;
  cout << "\ngradeBook1's new Instructor name:\n"
       << gradeBook1.getInstructorName() << "\n"
       << endl;

  gradeBook1.displayMessage();
}
