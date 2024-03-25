/*3. Define a class Complex with private members for real and imaginary parts. Write
a friend function add that takes two Complex objects as parameters and returns
the sum of the two complex numbers.*/
#include <iostream>
using namespace std;
class complex
{
    float x, y,tmp;
public:
    complex()
    {
        x=y=0;
    }
    complex(float a, float b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<<x<<"a "<<" "<<y<<" b";
    }
    friend complex add(complex,complex);
};
complex add(complex obj1,complex obj2)
{
    complex  tmp;
    tmp.x = obj1.x + obj2.x;
    tmp.y = obj1.y + obj2.y;
    return tmp;
}
int main()
{
    complex obj1(5.5,6),obj2(9.5,6),obj3;
    obj3=add(obj1, obj2);

    cout << "\n A : "<<"\t";
    obj1.display();
    cout << "\n B : "<<"\t";
    obj2.display();
    cout << "\n A +B : ";
    obj3.display();
    return 0;
}
