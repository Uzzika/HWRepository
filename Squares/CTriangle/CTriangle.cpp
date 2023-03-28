#include "CTriangle.h"

CTriangle::CTriangle(CPoint _A, CPoint _B, CPoint _C) : A(_A), B(_B), C(_C) {}

float CTriangle::calculateAB() { return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2)); }

float CTriangle::calculateBC() { return sqrt(pow(B.x - C.x, 2) + pow(B.y - C.y, 2)); }

float CTriangle::calculateAC() { return sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2)); }

float* CTriangle::calculateSides() {
  float* sides = new float[3];
  sides[0] = calculateAB();
  sides[1] = calculateBC();
  sides[2] = calculateAC();
  return sides;
}

float CTriangle::calculateP() {
  return calculateAB() + calculateBC() + calculateAC();
}

float CTriangle::calculateS() {
  float* sides = calculateSides();
  float p = (sides[0] + sides[1] + sides[2]) / 2.0;
  float S = sqrt(p * (p - sides[0]) * (p - sides[1]) * (p - sides[2]));
  delete[] sides;
  return S;
}
