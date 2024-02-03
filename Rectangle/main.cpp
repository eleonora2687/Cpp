#include <iostream>
#include <Rectangle.h>

using namespace std;

int main()
{

    int x, y;
    Rectangle r;
    cin>>x;
    cin>>y;

    r.setX(x);
    r.setY(y);

    cout<<"The area of the given rectangle is: "<<r.Area()<< endl;
    cout<<"The perimeter of the given rectangle is: "<<r.Perimeter()<<endl;
    return 0;
}
