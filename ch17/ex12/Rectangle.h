// 17.11 (Rectangle Class) Create a class Rectangle with attributes length and
// width, each of which defaults to 1. Provide member functions that calculate
// the perimeter and the area of the rectangle. Also, provide set and get
// functions for the length and width attributes. The set functions should ver-
// ify that length and width are each floating-point numbers larger than 0.0 and
// less than 20.0.
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <array>
class Rectangle {
  public:
    explicit Rectangle(std::array<float, 2> a1 = {0, 0}, std::array<float, 2> a2 = {0, 1},
                       std::array<float, 2> a3 = {2, 1}, std::array<float, 2> a4 = {2, 0});

    float Perimeter();
    float Area();

    void SetParameters(float, float);
    void SetLength(float);
    void SetWidth(float);

    void SetCoordinates(std::array<float, 2>, std::array<float, 2>, std::array<float, 2>, std::array<float, 2>);
    void SetPointCoordinates(std::array<float, 2>, std::array<float, 2> *);

    float GetLength() const;
    float GetWidth() const;

    bool IsSquare(Rectangle) const;

  private:
    float width;
    float length;

    std::array<float, 2> p1;
    std::array<float, 2> p2;
    std::array<float, 2> p3;
    std::array<float, 2> p4;
};

#endif // !RECTANGLE_H
