#include "rational.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv) {
    if (argc > 2) {
        // cout << argv[1] << " " << argv[2] << endl;
        Rational t(stoi(argv[1]), stoi(argv[2]));
        t.PrintRational();
    } else {
        Rational t;
        t.PrintRational();
    }

    return 0;
}
