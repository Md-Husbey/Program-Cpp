/*2. Define a class Circle with private members for radius and center point. Write a
friend function findCircumference that calculates and returns the circumference
of the circle.*/
#include<iostream>
using namespace std;
class Circle
{
private:
	float PI;
	float radius;
public:
	void getData()
	{
		PI=3.1416;
		cout<<"input the radius = ";
		cin>>radius;
	}
	friend float friendFunction(Circle c);
};
float friendFunction(Circle c)

	{
		return float(2*c.PI*c.radius);
	}
	int main()
	{
	Circle obj;
	obj.getData();
	cout<<"Radius is ="<<friendFunction(obj);
	}
