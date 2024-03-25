/*Class and Object Practice Question

1) You work for a car rental company and need to create a C++ class called "Car" to manage their
fleet. The Car class should have attributes for make, model, year, and mileage. Implement
member functions to:
1. Get the car's information as a formatted string.
2. Update the car's mileage.
3. Check if the car is a luxury car.*/

#include<iostream>
using namespace std;
class car{
private:
	string model;
	int Many;
	int year;
	float milage;
public:
	void get(float m,int y,string mo,int tk)
	{

	model=mo;
	year=y;
	Many=tk;
	milage=m;
	}
	void display()
	{
		cout<<"The model id : "<<model<<endl;
		cout<<"Mailes is : "<<milage<<endl;
		cout<<"Year is : "<<year<<endl;
		cout<<"Many is : "<<Many<<endl;
	}
	void updatemileage(int m)
	{
		milage=milage+m;
	}
	void Tk(int Many)
	{
		if(2095>Many)
		{
			cout<<"It,s lixary "<<endl;
		}
		else
		{
			cout<<"Is not Luxry "<<endl;
		}
	}
	};
	int main()
	{
		car o;
		o.get(1000,2021,"toyota",5000);
		o.display();
		cout<<"Upter Update"<<endl;
		o.updatemileage(500);
		o.display();
		o.Tk(200);
		o.display();
	}
