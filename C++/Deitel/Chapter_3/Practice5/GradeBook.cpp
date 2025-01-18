// GradeBook member-function definition. This file contains
// implementation of the member functions prototyped in GradeBook.h
#include "GradeBook.h" // include definition of class GradeBook
#include <iostream>
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name) {
  setCourseName(name); // validate and store courseName
} // end GradeBooks constructor

// function to set the course name
// ensure that the course name has at most 25 characters
void GradeBook::setCourseName(string name) {
  if (name.length() <= 25)  // if name has 25 or fewer characters
    courseName = name;      // store the course name in the object
  if (name.length() > 25) { // if name has more than 25 characters
    // set courseName to first 25 characters of parameter name
    courseName = name.substr(0, 25); // start at 0, length of 25
    cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
         "Limiting courseName to first 25 characters.\n"
         << endl;
  } // end if
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() {
  return courseName; // return object's courseName
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
  // call getCourseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // end function displayMessage
