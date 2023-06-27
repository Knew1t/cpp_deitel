// 18.7. Create a class DoubleSubscriptedArray that has similar features to
// class Array in Figs. 18.10– 18.11. At construction time, the class should be
// able to create a DoubleSubscriptedArray of any number of rows and columns.
// The class should supply operator() to perform double-subscripting operations.
// For example, in a 3-by-5 DoubleSubscriptedArray called chessBoard, the user
// could writechessBoard(1,
// 3)toaccesstheelementatrow1andcolumn3.Rememberthatoperator() can receive any
// number of arguments. The underlying representation of the
// DoubleSubscriptedArray could be a one-dimensional array of integers with rows
// * columns number of elements. Function operator() should perform the proper
// pointer arithmetic to access each element of the underlying array. There
// should be two versions of operator()—one that returns int & (so that an
// element of a DoubleSubscriptedArray can be used as an lvalue) and one that
// returns int. The class should also provide the following operators: ==, !=,
// =, << (for outputting the DoubleSubscriptedArray in row and column format)
// and >> (for inputting the entire DoubleSubscriptedArray contents).
//
#ifndef DOUBLE_SUBSCRIPTED_ARRAY_H
#define DOUBLE_SUBSCRIPTED_ARRAY_H

#include <ostream>
class DoubleSubscriptedArray {
  friend std::ostream& operator<<(std::ostream &, DoubleSubscriptedArray&);
  friend std::istream& operator>>(std::istream &, DoubleSubscriptedArray&);

  public:
    explicit DoubleSubscriptedArray(int = 1, int = 1);
    ~DoubleSubscriptedArray();
    int operator()(int, int) const;
    int &operator()(int, int);
    bool operator==(DoubleSubscriptedArray&) const;
    bool operator!=(DoubleSubscriptedArray&) const;


  private:
    int rows;
    int columns;
    int *ptr; // pointer to array
};
#endif // !DOUBLESUBSCRIPTED_ARRAY_H
