#pragma once
#include "point.h"

class Circle :public Point {
	friend ostream& operator<<(ostream&, const Circle&);
public:
	Circle(double = 0, int = 0, int = 0);
	void setRadius(double r);
	double getRadius() const;
	virtual double calculatearea() const;
	virtual void drawShape() const { cout << "Circle : "; }
	virtual void print() const;
protected:
	double radius;
};