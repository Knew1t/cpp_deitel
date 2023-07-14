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

#include "DoubleSubscriptedArray.h"
#include <iostream>
#include <ostream>
#include <stdexcept>

DoubleSubscriptedArray::DoubleSubscriptedArray(int rws, int cls)
    : rows(rws * cls != 0 ? rws : throw std::invalid_argument("can't be zero")),
      columns(cls), ptr(new int[rows * columns]) {}

const DoubleSubscriptedArray &
DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right) {
  if (&right != this){
    if (rows*columns != right.rows * right.columns){
      delete [] ptr;
      ptr = new int[right.rows * right.columns];
      rows = right.rows;
      columns = right.columns;
    }
    for (size_t i = 0; i < rows * columns; i++) {
      ptr[i] = right.ptr[i];
    }
  } 
    return *this;
}

DoubleSubscriptedArray::~DoubleSubscriptedArray() { delete[] ptr; }

int DoubleSubscriptedArray::operator()(int place_in_a_row,
                                       int place_in_a_col) const {
    if (place_in_a_row > 0 && place_in_a_col > 0 && place_in_a_row <= rows &&
        place_in_a_col <= columns) {
        return ptr[rows * (place_in_a_col - 1) + place_in_a_row - 1];
    } else {
        throw std::invalid_argument("Invalid coordinates");
    }
}

int &DoubleSubscriptedArray::operator()(int place_in_a_row,
                                        int place_in_a_col) {
    if (place_in_a_row > 0 && place_in_a_col > 0 && place_in_a_row <= rows &&
        place_in_a_col <= columns) {
        int &tmp = ptr[rows * (place_in_a_col - 1) + place_in_a_row - 1];
        return tmp;
    } else {
        throw std::invalid_argument("Invalid coordinates");
    }
}

std::ostream &operator<<(std::ostream &output,
                         DoubleSubscriptedArray &out_array) {
    int size = out_array.columns * out_array.rows;
    for (int i = 0; i < size; ++i) {
        if (i != 0 && i % out_array.columns == 0)
            output << std::endl;
        output << out_array.ptr[i] << " ";
    }
    output << std::endl;
    return output;
}

std::istream &operator>>(std::istream &input,
                         DoubleSubscriptedArray &input_array) {
    for (size_t i = 0; i < input_array.columns * input_array.rows; ++i) {
        input >> input_array.ptr[i];
    }
    return input;
}

bool DoubleSubscriptedArray::operator==(DoubleSubscriptedArray &right) const {
    if (columns == right.columns && rows == right.rows) {
        for (size_t i = 0; i < columns * rows; ++i) {
            if (ptr[i] == right.ptr[i])
                continue;
            else
                return false;
        }
        return true;
    }
    return false;
}

bool DoubleSubscriptedArray::operator!=(DoubleSubscriptedArray &right) const {
    return !(*this == right);
}
