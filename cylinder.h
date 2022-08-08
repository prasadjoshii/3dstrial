#pragma once
#include"circle.h"
class Cylinder :public Circle {
	friend ostream& operator<<(ostream&, const Cylinder&);
public:
	Cylinder(double = 0, double = 0, int = 0, int = 0);
	void setHeight(double r);
	double getHeight() const;
	virtual double calculatearea() const;
	virtual double calculatevolume() const;
	virtual void drawShape() const { cout << "Cylinder : "; }
	virtual void print() const;
protected:
	double height;
};