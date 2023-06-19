#ifndef DATE_H
#define DATE_H

class Date {
  public:
    explicit Date(int = 1, int = 1, int = 2000);
    void print();
    void NextDay();

  private:
    unsigned int CheckDay(int);

    unsigned int month;
    unsigned int day;
    unsigned int year;
};
#endif // DATE_H
