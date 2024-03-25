/*2.Define a class Circle with private members for radius and center point. Write a
friend function findCircumference that calculates and returns the circumference
of the circle.*/
#include<iostream>
using namespace std;
const double PI = 3.14159;
class A
{
    float circle,circumference;
public:
    void get(float r)
    {
        circumference=PI*(r*r);
        circle=(3.1416*r);
    }
    friend void dispay( A);
};
void dispay( A obj)
{
    cout<<"circle IS = "<<obj.circle<<endl;
}
int main()
{
    A Obj;
    Obj.get(10);
    dispay(Obj);
    return 0;
}
