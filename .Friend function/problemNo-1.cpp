/*1. Define a class Rectangle with private members for length and width. Write a
friend function findArea that calculates and returns the area of the rectangle.*/
#include <iostream>
using namespace std;

class A
{
    float area, length, circumference;

public:
    void get(float L)
    {
        length = L;
        circumference = L * 3;
        area = (1.73 * length * length) / 4;
    }

    friend void dispay(A);
};
void dispay(A obj)
{
    cout << "circumference IS = " << obj.circumference << endl;
    cout << "Area IS = " << obj.area << endl;
}

int main()
{
    A Obj;

    Obj.get(10);
    dispay(Obj);

    return 0;
}
