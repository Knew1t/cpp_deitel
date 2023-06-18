#include "complex.h"
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {

  Complex a(10,20);
  Complex b(4,30);
  a.SubComp(a, b);
  a.PrintCompNum();
  
  return 0;
}
