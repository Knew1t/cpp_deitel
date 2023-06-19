#ifndef TIMEANDDATE_H
#define TIMEANDDATE_H

class DateAndTime {
  public:
    explicit DateAndTime(int = 0, int = 0, int = 0, int = 1, int = 1,
                         int = 2000);  // default constructor

    void NextDay();

    // set functions
    void setTime(int, int, int); // set hour, minute, second
    void setHour(int);           // set hour (after validation)
    void setMinute(int);         // set minute (after validation)
    void setSecond(int);         // set second (after validation)

    // get functions
    unsigned int getHour() const;   // return hour
    unsigned int getMinute() const; // return minute
    unsigned int getSecond() const; // return second

    void printDate() const;
    void printUniversal() const; // output time in universal-time format
    void printStandard() const;  // output time in standard-time format

    void tick();

  private:
    unsigned int hour;   // 0 - 23 (24-hour clock format)
    unsigned int minute; // 0 - 59
    unsigned int second; // 0 - 59

    unsigned int CheckDay(int);
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

#endif // !TIMEANDDATE_H
