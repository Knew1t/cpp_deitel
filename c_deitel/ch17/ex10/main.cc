// Fig. 17.6: fig17_06.cpp
// Constructor with default arguments.
#include "Time.h" // include definition of class Time from Time.h
#include <iostream>
#include <stdexcept>
#include <ctime>
using namespace std;

int main() {
  Time a(400,500,500);
  a.printStandard();

} // endmain
