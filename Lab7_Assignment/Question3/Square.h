#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square();
        Square(float length);
        ~Square();

        // Accessor methods
        void setSideLength(float length);
        float getSideLength() const;
    };
}

#endif // SQUARE_H
