/*1. Define a class Rectangle with private members for length and width. Write a
friend function findArea that calculates and returns the area of the rectangle.*/
#include <iostream>
using namespace std;

class A
{
    float length;
    float width;
public:
    void get(float L,float w)
    {
        length = L;
        width=w;
        
    }
    friend float findarea(A & o);
   
};
    float findarea(A & o)
    {
        return o. length *o.width;
    }

int main()
{
    A Obj;

    Obj.get(10,20);
    findarea(Obj);
    cout<<" the resyult is: "<<findarea(Obj)<<endl;
   

    return 0;
}
