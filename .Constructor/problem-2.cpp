/*2: Design a C++ class to represent a Shape. The class should have the following attributes: color,
area, perimeter. The class should also have the following methods: getArea(), getPerimeter(),
setColor(), drawShape(). The class should have a constructor that initializes the color, area and
perimeter.Write a C++ program to create a Shape object and set the color and area of the shape.
Then, draw the shape on the console.*/
#include <iostream>
using namespace std;

class Rectangular {

    private:
        int width;
        int height;

    public:

        Rectangular () {
            width = 25;
            height = 55;
        }

        Rectangular (int w, int h) {
            width = w;
            height = h;
        }

        void setWidth (int w) {
            width = w;
        }

        void setHeight (int h) {
            height = h;
        }

        int getWidth () {
            return width;
        }

        int getHeight () {
            return height;
        }

        int getArea () {
            return width*height;
        }

        int getPerimeter () {
            return width+height;
        }
 };

class Square : public Rectangular{
    public:
        Square (int w) {
           getWidth();
        }
};

int main(int argc,char *argv[])
{
    Rectangular a, b(10,12);
    Square c(5);
    cout << "Width for a: " << a.getArea() << " Perimeter for a: " << a.getPerimeter() << endl;
    cout << "Width for b: " << b.getArea() << " Perimeter for b: " << b.getPerimeter() << endl;
    cout << "Area for c: " << c.getArea() << " Perimeter for c: " << c.getPerimeter() << endl;
 }