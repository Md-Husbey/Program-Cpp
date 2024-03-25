/*Class and Object Practice Question

1) You work for a car rental company and need to create a C++ class called "Car" to manage their
fleet. The Car class should have attributes for make, model, year, and mileage. Implement
member functions to:
1. Get the car's information as a formatted string.
2. Update the car's mileage.
3. Check if the car is a luxury car.*/

#include<iostream>
using namespace std;
class account
{
    int idNumber;
    string name;
    float balance;
public:
    void gat(int id,string n,float b)
    {
        idNumber=id;
        name=n;
        balance=b;
    }
    void deposit(int n)
    {
    	cout<<"Deposit your Acount = ";
    	cin>>n;
	balance=balance+n;
    }
    void wd(int n){
	cout<<"How much you want Withdrow = ";
	cin>>n;
	balance=balance-n;
    }
    void display()
    {
    	cout<<"ID :"<<idNumber<<endl;
    	cout<<"Name : "<<name<<endl;
    	cout<<"Balance : "<<balance<<endl;
    }
};
int main()
{
	account obj;
	obj.gat(23203032,"Husbey",1000);
	obj.display();
	obj.deposit(0);
	obj.display();
	obj.wd(0);
	obj.display();
}
