/*1. Define a class Rectangle with private members for length and width. Write a
friend function findArea that calculates and returns the area of the rectangle.*/
#include<iostream>
using namespace std;
class rectangle
{	private:
	float length;
	float width;
public:
	void getData()
	{
	length=5.2;
	width=4.3;
	}

	friend float friend_function(rectangle R)
	{
	return float(R.length*R.width);
	}
	} ;
	int main()
	{
	rectangle obj;
	obj.getData();
	cout<<"rectangle is ="<<friend_function(obj);

	return 0;

	}
