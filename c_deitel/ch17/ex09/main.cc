#include <iostream>
#include "DateAndTime.h"

int main (int argc, char *argv[]) {
  DateAndTime date1(23,58,57,12,21,2004);
 for (int i = 0; i < 70; i++) {
   date1.tick();
   date1.printUniversal();
 } 
  return 0;
}
