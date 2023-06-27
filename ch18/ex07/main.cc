// 18.7. Create a class DoubleSubscriptedArray that has similar features to
// class Array in Figs. 18.10– 18.11. At construction time, the class should be
// able to create a DoubleSubscriptedArray of any number of rows and columns.
// The class should supply operator() to perform double-subscripting operations.
// For example, in a 3-by-5 DoubleSubscriptedArray called chessBoard, the user
// could writechessBoard (1,
// 3)toaccesstheelementatrow1andcolumn3. Remembert hatoperator() can receive any
// number of arguments. The underlying representation of the
// DoubleSubscriptedArray could be a one-dimensional array of integers with rows
// * columns number of elements. Function operator() should perform the proper
// pointer arithmetic to access each element of the underlying array. There
// should be two versions of operator()—one that returns int & (so that an
// element of a DoubleSubscriptedArray can be used as an lvalue) and one that
// returns int. The class should also provide the following operators: ==, !=,
// =, << (for outputting the DoubleSubscriptedArray in row and column format)
// and >> (for inputting the entire DoubleSubscriptedArray contents).

#include "DoubleSubscriptedArray.h"
#include <iostream>
#include <ostream>

int main() {

    DoubleSubscriptedArray hello(1, 2);
    DoubleSubscriptedArray gb(1, 2);
    std::cout << "enter array 1x2" << std::endl;
    std::cin >> hello;
    std::cout << "enter array 1x2" << std::endl;
    std::cin >> gb;
    std::cout << (gb == hello)<< std::endl;
    std::cout << (gb != hello)<< std::endl;
    hello = gb;
    std::cout << "hello = gb" << std::endl;
    std::cout << hello << std::endl;


    return 0;
}
