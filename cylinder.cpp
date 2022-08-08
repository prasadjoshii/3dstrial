//member and friend function definition for class cylinder

#include"cylinder.h"
extern const double PI;

//cylinder constructor calls circle constructor
Cylinder::Cylinder(double h, double r, int x, int y)
	: Circle(r,x, y) { // calls base class constructor
	setHeight(h);
}

// set height of cylinder
void Cylinder::setHeight(double h) {
	height = (h >= 0 ? h : 0);
}

double Cylinder::getHeight() const {
	return height;
}

double Cylinder::calculatearea() const {
	return 2 * Circle::calculatearea() + 2 * PI * radius * height;
}

double Cylinder::calculatevolume() const {
	return Circle::calculatearea() * height;
}

void Cylinder::print() const {
	Circle::print();
	cout << "height: " << height << endl;
}

//output cylinder dimensions
ostream& operator<<(ostream& output, const Cylinder& c) {
	output << static_cast<Circle>(c)\
		<< " Height " << c.height;
	return output; //enables cascaded calls
}
