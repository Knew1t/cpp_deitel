#include "my_time.h" // include definition of class Time from Time.h
// #include <ctime>
// #include"time.h"
#include <iomanip>
#include <iostream>
#include <stdexcept>
using namespace std;
Time::Time(int, int, int) {
    time_t current_time;
    time(&current_time);
    setTime(localtime(&current_time)->tm_hour, localtime(&current_time)->tm_min,
            localtime(&current_time)->tm_sec);
}
// Time::Time(int h, int m, int s) { setTime(h, m, s); }
void Time::setTime(int h, int m, int s) {
    setHour(h);   // set private field hour
    setMinute(m); // set private field minute
    setSecond(s); // set private field second
}
// set hour value
void Time::setHour(int h) {
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
} // end function setHour

// set minute value
void Time::setMinute(int m) {
    if (m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");
}
void Time::setSecond(int s) {
    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");
} // end function setSecond

// return hour value
unsigned int Time::getHour() const { return hour; } // end function getHour

// return minute value
unsigned Time::getMinute() const { return minute; } // end function getMinute

// return second value
unsigned Time::getSecond() const { return second; } // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const {
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2)
         << getMinute() << ":" << setw(2) << getSecond();
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const {
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
         << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
         << getSecond() << (hour < 12 ? " AM" : " PM");
} // end
