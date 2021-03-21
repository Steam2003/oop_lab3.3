#pragma once
#include "Point.h"
class opPoint: public Point
{
public:
	opPoint();
	opPoint(double a, double b);
	opPoint(const opPoint& A);
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void toPolar() const;
	void Distance() const { cout << "Polar radius: " << sqrt(x * x + y * y) << endl; };
	bool isEqual(const opPoint& A) const;
};

