/*2. Create a class named Shape with data members to store the width and height of a
shape. Create another class named Rectangle that inherits from the Shape class and
has a method to calculate the area of the rectangle. Write a program to create a
Rectangle object and print out its area.*/

#include <iostream>
using namespace std;
class shape
{
protected:
    float width, height;

public:
    shape() {}
    shape(float w, float h)
    {
        width = w;
        height = h;
    }
};
class Rectangle : protected shape
{
protected:
    float area;

public:
    Rectangle(float w, float h)
    {
        width = w;
        height = h;

        area = h * w;
    }
    void display()
    {
        cout << "area is = " << area;
    }
};
int main()
{
    Rectangle r('22', '2');
    r.display();
    return 0;
}
