#include "Rectangle.h"
#include <array>
#include <iostream>
using namespace std;
void fun(array<float,2> arr = {123,321}){
  cout << arr[1] << endl;
}
int main() {
    array<float, 2> p1 = {0, 0};
    array<float, 2> p2 = {0, 1};
    array<float, 2> p3 = {200, 1};
    array<float, 2> p4 = {200, 0};
    // fun();
    Rectangle r1(p1,p2,p3,p4);
    cout << r1.GetWidth() << " " << r1.GetLength() << endl;
    Rectangle r2;
    cout << r2.GetWidth() << " " << r2.GetLength() << endl;
    return 0;
}
