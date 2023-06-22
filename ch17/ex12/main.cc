#include "Rectangle.h"
#include <array>
#include <iostream>
using namespace std;
int main() {
    array<float, 2> p1 = {0, 0};
    array<float, 2> p2 = {0, 1};
    array<float, 2> p3 = {1, 1};
    array<float, 2> p4 = {1, 0};
    // fun();
    Rectangle r1(p1, p2, p3, p4);
    cout << r1.GetWidth() << " " << r1.GetLength() << endl;
    cout << "is square = " << r1.IsSquare() << endl;
    Rectangle r2;
    cout << r2.GetWidth() << " " << r2.GetLength() << endl;
    return 0;
}
