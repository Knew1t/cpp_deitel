// 17.4 (Enhancing Class Time) Provide a constructor that’s capable of using the
// current time from the time and localtime functions—declared in the C++
// Standard Library header <ctime>—to ini- tialize an object of the Time class.
#ifndef MY_TIME_H
#define MY_TIME_H
class Time {
  public:
    Time(int = 0, int = 0, int = 0); // constructor
    void setTime(int, int, int);              // set hour, minute and second
    void printUniversal() const; // print time in universal-time format
    void printStandard() const;  // print time in standard-time format
    unsigned getMinute() const;
    unsigned getHour() const;
    unsigned getSecond() const;
    void setMinute(int) ;
    void setHour(int) ;
    void setSecond(int) ;
    // ~Time();

  private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};
#endif //MY_TIME_H
