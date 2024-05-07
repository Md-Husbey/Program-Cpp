/*3. Define a class Complex with private members for real and imaginary parts. Write
a friend function add that takes two Complex objects as parameters and returns
the sum of the two complex numbers.*/

#include <iostream>
using namespace std;
class complex
{
    float x, y;
public:
   void get()
    {
    	cout<<"input ";
    	cin>>x>>x;
    	cout<<x<<"+"<<x<<"i"<<endl;
    	cout<<"input ";
    	cin>>y>>y;
    	cout<<y<<"+"<<y<<"i"<<endl;
    }
   friend void a(complex);
};
void a(complex obj1)
{
   int x = obj1.x + obj1.x;
  int y = obj1.y + obj1.y;
    cout<<"The result Complex number is = "<<x<<"+"<<y<<"i"<<endl;
}
int main()
{
    complex obj1;
    obj1.get();
	a(obj1);
    return 0;
}
