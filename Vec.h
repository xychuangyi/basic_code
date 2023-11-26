#ifndef P3_VEC_H
#define P3_VEC_H

#include <cmath>

class Vec {
private:
    float x, y;

public:
    Vec(float _x, float _y) {
        x = _x;
        y = _y;
    }

    float getX() { return x; }

    float getY() { return y; }

    // Example Overloads + operator -- return the sum of 2 Vec
    Vec operator+(Vec v) { return Vec(x + v.getX(), y + v.getY()); }

    // Overload - on 2 Vectors -- return their difference Vector
    Vec operator-(Vec v) { return Vec(x - v.getX(), y - v.getY()); }

    // Overload * operator on a float k -- return current Vector scaled by k
    Vec operator*(float k) { return Vec(k * x, k * y); }

    // Overload * on 2 Vectors -- return their inner product (scalar product)
    Vec operator*(Vec v) { return Vec(x * v.getX(), y * v.getY()); }

    // Overload << on an angle -- return current vector rotated counter clockwise by this angle
    Vec operator<<(float ang) {
        return Vec(x * (float) cos(ang) - y * (float) sin(ang), x * (float) sin(ang) + y * (float) cos(ang));
    }

    // Overload >> on an angle -- return current vector rotated clockwise by this angle
    Vec operator>>(float ang) {
        return Vec(x * (float) cos(ang) + y * (float) sin(ang), x * (float) sin(ang) - y * (float) cos(ang));
    }
};

#endif //P3_VEC_H
