#include "DateAndTime.h" // include definition of class Time from Time.h using namespace std;
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <array>
using namespace std;
// Time constructor initializes each data member
DateAndTime::DateAndTime(int hour, int minute, int second, int month, int day,
                         int year) {}

void DateAndTime::setTime(int h, int m, int s) {
    setHour(h);   // set private field hour
    setMinute(m); // set
    setSecond(s); // set
}

void DateAndTime::setHour(int h) {
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
}

void DateAndTime::setMinute(int m) {
    if (m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");
}

void DateAndTime::setSecond(int s) {
    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int DateAndTime::getHour() const { return hour; }

unsigned DateAndTime::getMinute() const { return minute; }

unsigned DateAndTime::getSecond() const { return second; }

void DateAndTime::printUniversal() const {
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2)
         << getMinute() << ":" << setw(2) << getSecond();
}

void DateAndTime::printStandard() const {
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
         << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
         << getSecond() << (hour < 12 ? " AM" : " PM");
}

void DateAndTime::tick() {
    if (getSecond() == 59) {
        setSecond(0);
        if (getMinute() == 59) {
            setMinute(0);
            if (getHour() == 23) {
                setHour(0);
            } else {
                hour += 1;
            }
        } else {
            minute += 1;
        }
    } else {
        second += 1;
    }
}
// DateAndTime::Date(int mn, int dy, int yr) : month(mn), day(dy), year(yr) {
//
//     if (mn > 0 && mn <= 12) // validate the month
//         month = mn;
//     else
//         throw invalid_argument("month must be 1-12");
//
//     year = yr;          // could validate yr
//     day = CheckDay(dy); // validate the day
//
//     // output Date object to show when its constructor is called
//     cout << "Date object constructor for date ";
//     print();
//     cout << endl;
// }

void DateAndTime::print() {
    cout << month << '/' << day << '/' << year << endl;
} // end function print
  //
static const array<int, 13> daysPerMonth = {0,  31, 28, 31, 30, 31, 30,
                                            31, 31, 30, 31, 30, 31};

unsigned int DateAndTime::CheckDay(int testDay) {

    // determine whether testDay is valid for specified month
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // February 29 check for leap year
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
}

void DateAndTime::NextDay() {
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
