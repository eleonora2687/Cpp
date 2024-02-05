#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{

    Circle c;
    float radius;
    cout << "Give the radius of the circle: ";
    cin >> radius;
    c.setRadius(radius);
    cout << "The radius you've entered is: "<<c.getRadius()<<endl;

    cout << "The perimeter of the circle is: "<<c.Perimeter()<<endl;


    cout << "The area of the circle is: "<<c.Area()<<endl;

    return 0;
}
