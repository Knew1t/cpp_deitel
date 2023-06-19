#include "Date.h" // include definition of class Date from Date.h
#include <iostream>
using namespace std;

// Date constructor (should do range checking)
Date::Date(int m, int d, int y)
    : month(m), day(d), year(y) {} // end constructor Date

void Date::print() {
    cout << month << '/' << day << '/' << year;
} // end function print
