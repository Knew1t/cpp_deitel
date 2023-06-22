#include "Rectangle.h"
#include <array>
#include <iostream>
#include <stdexcept>

using namespace std;

Rectangle::Rectangle(array<float, 2> ip1, array<float, 2> ip2,
                     array<float, 2> ip3, array<float, 2> ip4)
    : p1(ip1), p2(ip2), p3(ip3), p4(ip4) {
    SetCoordinates(ip1, ip2, ip3, ip4);
};

void Rectangle::SetParameters(float w, float l) {
    SetLength(l);
    SetWidth(w);
}

void Rectangle::SetCoordinates(array<float, 2> p1_in, array<float, 2> p2_in,
                               array<float, 2> p3_in, array<float, 2> p4_in) {
    if (p1_in[0] == p2_in[0] && p3_in[0] == p4_in[0] && p1_in[1] == p4_in[1] &&
        p2_in[1] == p3_in[1]) {
    } else {
        throw invalid_argument("not a Rectangle");
    }
}

void Rectangle::SetPointCoordinates(array<float, 2> incoming_coordinates,
                                    array<float, 2> *p) {
    if (abs(incoming_coordinates[0] - incoming_coordinates[1]) <= 20)
        *p = incoming_coordinates;
    else
        throw invalid_argument("side can not be more than 20.0");
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
    if (abs(p1[0] - p2[0]) < 1e-6) {
        return abs(p1[1] - p2[1]) < abs(p1[0] - p4[0]) ? abs(p1[1] - p2[1])
                                                       : abs(p1[0] - p4[0]);
    } else {
        return abs(p1[0] - p2[0]) < abs(p1[1] - p4[1]) ? abs(p1[0] - p2[0])
                                                       : abs(p1[1] - p4[1]);
    }
}

float Rectangle::GetLength() const {
    if (abs(p1[0] - p2[0]) < 1e-6) {
        return abs(p1[1] - p2[1]) > abs(p1[0] - p4[0]) ? abs(p1[1] - p2[1])
                                                       : abs(p1[0] - p4[0]);
    } else {
        return abs(p1[0] - p2[0]) > abs(p1[1] - p4[1]) ? abs(p1[0] - p2[0])
                                                       : abs(p1[1] - p4[1]);
    }
}

bool Rectangle::IsSquare(Rectangle rect) const {
    if (GetLength() == GetWidth())
        return true;
    else
        return false;
}
