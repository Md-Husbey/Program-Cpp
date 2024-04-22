/*2: Design a C++ class to represent a Shape. The class should have the following attributes: color,
area, perimeter. The class should also have the following methods: getArea(), getPerimeter(),
setColor(), drawShape(). The class should have a constructor that initializes the color, area and
perimeter.Write a C++ program to create a Shape object and set the color and area of the shape.
Then, draw the shape on the console.*/

#include<iostream>
using namespace std;
class Shape
{
    string color;
    float area;
    float perimeter;
public:

    Shape(string a,float b,float c)
    {
        color=a;
        area= b * c;
        perimeter=2*(b+c);
    }
    void getArea(float x,float y)
    {
        area=x*y;
    }
    void getPerimeter(float x,float y)
    {
        perimeter=2*(x+y);
    }
    void setColor(string x)
    {
        color=x;
    }
    void drawShape()
    {
        cout<<"Color :"<<color<<endl;
        cout<<"Area :"<<area<<endl;
        cout<<"Perimeter :"<<perimeter<<endl;
    }
};
int main()
{
    Shape s("Blue",10,10);

    s.drawShape();

    return 0;
}
