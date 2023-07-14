// 17.11 (Rectangle Class) Create a class Rectangle with attributes length and width, each of which defaults to 1. Provide member functions that calculate the perimeter and the area of the rectangle. Also, provide set and get functions for the length and width attributes. The set functions should ver- ify that length and width are each floating-point numbers larger than 0.0 and less than 20.0.
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
  public:
    explicit Rectangle(float = 1, float = 1);

    float Perimeter();
    float Area();

    void SetParameters(float, float);
    void SetLength(float);
    void SetWidth(float);

    float GetLength() const;
    float GetWidth() const;

  private:
    float width;
    float length;
};

#endif // !RECTANGLE_H
