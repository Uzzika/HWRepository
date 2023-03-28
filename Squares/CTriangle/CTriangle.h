#pragma once
#include <cmath>

class CPoint {
    int x;
    int y;
 public:
    CPoint(int _x, int _y) : x(_x), y(_y) {};

    friend class CTriangle;
};

class CTriangle {
    CPoint A;
    CPoint B;
    CPoint C;

 public:
    CTriangle(CPoint _A, CPoint _B, CPoint _C);

    float calculateAB();
    float calculateBC();
    float calculateAC();

    float* calculateSides();

    float calculateP();
    float calculateS();
};
