#include "rational.h"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(int argc, char **argv) {
    if (argc > 2) {
        Rational t(stoi(argv[1]), stoi(argv[2]));
        cout << "first rat = ";
        t.PrintRational();
        t.PrintRatFloating();

        Rational d(stoi(argv[3]), stoi(argv[4]));
        cout << "second rat = ";
        d.PrintRational();
        d.PrintRatFloating();

        cout << "first + second = ";
        Rational res =  t.AddRat(t, d);
        res.PrintRational();
        res.PrintRatFloating();

        cout << "first - second = ";
        res =  t.SubRat(t, d);
        res.PrintRational();
        res.PrintRatFloating();

        cout << "first * second = ";
        res =  t.MultRat(t, d);
        res.PrintRational();
        res.PrintRatFloating();

        cout << "first / second = ";
        res =  t.DivRat(t, d);
        res.PrintRational();
        res.PrintRatFloating();
    } else {
        Rational t;
        t.PrintRational();
    }

    return 0;
}
