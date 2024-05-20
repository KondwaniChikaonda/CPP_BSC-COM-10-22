#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(float base, float height);
        ~Triangle();

        // Accessor methods
        void setBase(float base);
        void setHeight(float height);
        float getBase() const;
        float getHeight() const;
    };
}

#endif // TRIANGLE_H
