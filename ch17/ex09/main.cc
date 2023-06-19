#include <iostream>
#include "date.h"

int main (int argc, char *argv[]) {
  Date date1(12,21,2004);
  date1.print();
 for (int i = 0; i < 30; i++) {
   date1.NextDay();
   date1.print();
 } 
  return 0;
}
