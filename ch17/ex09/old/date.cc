#include "Date.h" // include definition of class Date from Date.h
#include <array>
#include <iostream>
using namespace std;

// Date constructor (should do range checking)
Date::Date(int mn, int dy, int yr) : month(mn), day(dy), year(yr) {

    if (mn > 0 && mn <= 12) // validate the month
        month = mn;
    else
        throw invalid_argument("month must be 1-12");

    year = yr;          // could validate yr
    day = CheckDay(dy); // validate the day

    // output Date object to show when its constructor is called
    cout << "Date object constructor for date ";
    print();
    cout << endl;
}

void Date::print() {
    cout << month << '/' << day << '/' << year << endl;
} // end function print
  //
static const array<int, 13> daysPerMonth = {0,  31, 28, 31, 30, 31, 30,
                                            31, 31, 30, 31, 30, 31};

unsigned int Date::CheckDay(int testDay) {

    // determine whether testDay is valid for specified month
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // February 29 check for leap year
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
}

void Date::NextDay() {
    CheckDay(day);
    int max_days_in_month = daysPerMonth[month];
    if (month == 2 && 
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
      max_days_in_month = 29;
    }
    if (day == max_days_in_month) {
        day = 1;
        if (month == 12) {
            month = 1;
            year += 1;
        } else {
            month += 1;
        }
    } else {
        day += 1;
    }
}
