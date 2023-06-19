#include "rational.h"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(int argc, char **argv) {
    if (argc > 2) {
        // cout << argv[1] << " " << argv[2] << endl;
        Rational t(stoi(argv[1]), stoi(argv[2]));
        cout << "first rat = ";
        t.PrintRational();
        Rational d(stoi(argv[3]), stoi(argv[4]));
        cout << "second rat = ";
        d.PrintRational();
        cout << "first + second = ";
        Rational res =  t.AddRat(t, d);
        res.PrintRational();
    } else {
        Rational t;
        t.PrintRational();
    }
    // int a = stoi(argv[1]);
    // int b = stoi(argv[2]);
    // cout << "greatest common d = " << __gcd(a, b) << endl;
    // cout << "least common multiple = " << lcm(a, b) << endl;

    return 0;
}
