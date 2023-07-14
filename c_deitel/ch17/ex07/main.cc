// Fig. 17.6: fig17_06.cpp
// Constructor with default arguments.
#include "Time.h" // include definition of class Time from Time.h
#include <iostream>
#include <stdexcept>
#include <ctime>
using namespace std;

int main() {
    Time t1(23, 59, 0);
    clock_t start_time;
    start_time = clock();
    for (;;) {
      cout << "hey cycle";
        t1.tick();
        t1.printStandard();
        if (clock() - start_time >= 500) {
            break;
        } else {
          cout << "go" << endl;
        }
    }

} // endmain
