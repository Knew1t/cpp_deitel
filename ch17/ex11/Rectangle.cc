#include "Rectangle.h"
#include <iostream>
#include <stdexcept>

using namespace std;
Rectangle::Rectangle(float w, float l) { SetParameters(w, l); }

void Rectangle::SetParameters(float w, float l) {
    SetLength(l);
    SetWidth(w);
}
void Rectangle::SetLength(float l) {
    if (l < 0 || l > 20)
        throw invalid_argument("len should be [0,20]");
    else
        length = l;
}

void Rectangle::SetWidth(float w) {
    if (width < 0 || width > 20)
        throw invalid_argument("width should be [0,20]");
    else
        width = w;
}

float Rectangle::GetWidth() const {
  return width;
}

float Rectangle::GetLength() const {
  return length;
}
