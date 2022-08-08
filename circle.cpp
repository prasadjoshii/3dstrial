#include "circle.h"

extern const double PI = 3.14159;
 
Circle::Circle(double r, int x, int y) :Point(x, y) {
	setRadius(r);
}

void Circle::setRadius(double r) {
	radius = (r > 0) ? r : 0;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::calculatearea() const {
	return PI * radius * radius;
}

void Circle::print() const {
	Point::print();
	cout << "Radius: " << radius << endl;
}

ostream& operator<<(ostream& out, const Circle& c) {
	out << " Center is " << static_cast<Point>(c)\
		<< " Radius is " << c.radius << " Area is " << c.calculatearea();
	return out;
}

void foo() {
	cout << "For git\n";
}