#ifndef DOUBLE_SUBSCRIPTED_ARRAY_H
#define DOUBLE_SUBSCRIPTED_ARRAY_H

#include <array>

class DoubleSubscriptedArray {
public:
  explicit DoubleSubscriptedArray(int = 1, int = 1) = default;
  DoubleSubscriptedArray(DoubleSubscriptedArray &&) = default;
  DoubleSubscriptedArray(const DoubleSubscriptedArray &) = default; //copy constructor
  DoubleSubscriptedArray &operator=(DoubleSubscriptedArray &&) = default; //assignments
  DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &) = default;
  ~DoubleSubscriptedArray() = default;

private:
  
};
#endif // !DOUBLESUBSCRIPTED_ARRAY_H
