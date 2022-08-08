// shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include "shape.h"
int main()
{
   /* std::cout << "Hello World!\n";
    Point *pointptr = 0, p(30, 50);
    Circle* circleptr = 0, c(2.7, 120, 89);
    Cylinder* cylinderptr = 0, cy(5.2, 3.2, 10, 12);
    cout << "Point p:" << p << "\ncircle c:" << c << '\n';
    pointptr = &c; 

    //treat a circle is a point
    cout << "\nCircle c (via *pointptr): " << *pointptr << '\n';

    //treat a circle as a circle 
    //cast base class pointer to a derived class pointer
    circleptr = static_cast<Circle*>(pointptr);
    cout << "\nCircle c (via *circleptr): \n" << *circleptr
        << "\nArea of c (via circleptr): "
        << circleptr->calculatearea() << '\n';

    //DANGEROUS: Treat a point as a circle
    pointptr = &p;           //assign address of  point to pointptr
    //cast base-class pointer to derived class pointer

    circleptr = static_cast<Circle*>(pointptr);
    cout << "\nPoint p (via *circleptr): \n" << *circleptr
        << "\nArea of object circleptr points to: "
        << circleptr->calculatearea() << '\n';

    circleptr = &cy;
    cout << "\nCylinder " << *circleptr << '\n';
    cylinderptr = static_cast<Cylinder*>(circleptr);
    cout << "\nPoint p (via *cylinderptr): \n" << *cylinderptr
        << "\nArea of object cylinderptr points to: "
        << cylinderptr->calculatearea() << '\n'
        << cylinderptr->calculatevolume() << '\n';*/

    Point p1(2, 4);
    p1.drawShape();
    p1.print();
    cout << "Area is " << p1.calculateArea() << " and volume is " << p1.calculateVolume() << endl;

    Circle c1(4.1, 5, 6);
    c1.drawShape();
    c1.print();
    cout << "Area is " << c1.calculateArea() << " and volume is " << c1.calculateVolume() << endl;

    Cylinder cy1(5.2, 6.3, 7, 8);
    cy1.drawShape();
    cy1.print();
    cout << "Area is " << cy1.calculateArea() << " and volume is " << cy1.calculateVolume() << endl;
    Shape* shape[3] = { &p1,&c1,&cy1 };
    for (int i = 0; i < 3; ++i) {
        virtualviapointer(shape[i]);
        virtualviareference(*shape[i]);

    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
