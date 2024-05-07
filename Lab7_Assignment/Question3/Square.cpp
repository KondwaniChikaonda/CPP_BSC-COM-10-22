#include "Square.h"

namespace shapes {
    Square::Square() : sideLength(0) {}

    Square::Square(float length) : sideLength(length) {}

    Square::~Square() {}

    void Square::setSideLength(float length) {
        sideLength = length;
    }

    float Square::getSideLength() const {
        return sideLength;
    }
}
