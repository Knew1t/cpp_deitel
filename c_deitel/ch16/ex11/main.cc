#include "GradeBook.h"
#include <iostream>
using namespace std;
int main () {
  
  GradeBook newGradeBook("Cool Course", "Joe Abercrombie");
  newGradeBook.displayMessage();
  newGradeBook.setInstructorName("pathrick rothfuss");
  newGradeBook.setCourseName("bullshittery!");
  cout << "new lector and course! " << endl;
  newGradeBook.displayMessage();
  return 0;
}
