/*3. Define a class Complex with private members for real and imaginary parts. Write
a friend function add that takes two Complex objects as parameters and returns
the sum of the two complex numbers.*/
#include <iostream>
using namespace std;
class complex
{
    float x, y,tmp;
public:
   void get(float a, float b)
    {
        x = a;
        y = b;
    }
   friend void add(complex,complex);
};
void add(complex obj1,complex obj2)
{
    int x = obj1.x + obj2.x;
  int y = obj1.y + obj2.y;
    cout<<"The result Complex number is = "<<x<<"+"<<y<<"i"<<endl;
}
int main()
{
    complex obj1,obj2;
    obj1.get(5,2);
    obj2.get(3,8);
    add(obj1,obj2);
    return 0;
}
