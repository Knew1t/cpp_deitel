#include "GradeBook.h" 
#include <iostream>
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name, string instructorName)
    : courseName(name),
      courseInstructorName(
          instructorName) // member initializer to initialize courseName
{
    // empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name) {
    courseName = name; // store the course name in the object
} // end function setCourseName

void GradeBook::setInstructorName(string name) {
    courseInstructorName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const {
    return courseName; // return object's courseName
}

string GradeBook::getInstructorName() const {
    return courseInstructorName; // return object's courseName
}

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const {
    // call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "The course presented by\n" << getInstructorName() << "!" << endl;
}
