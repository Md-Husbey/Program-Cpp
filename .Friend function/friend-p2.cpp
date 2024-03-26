/*2.Define a class Circle with private members for radius and center point. Write a
friend function findCircumference that calculates and returns the circumference
of the circle.*/
#include <iostream>
using namespace std;
const double PI = 3.14159;
class A
{
    float redius;

public:
    void get(float r)
    {
        redius = r;
    }
    friend float findCircumference(A &o);
};
float findCircumference(A &o)
{
    float area = PI * (o.redius * o.redius);
    return area;
}
int main()
{
    A Obj;
    Obj.get(10);
    findCircumference(Obj);
    cout << "The Area is = " << findCircumference(Obj);
    return 0;
}
