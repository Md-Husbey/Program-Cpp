/*2) You are building a banking application and need to create a class called "Account" in C++. The
Account class should have attributes for account number, account holder name, and balance.
Implement member functions to:
1. Deposit funds into the account.
2. Withdraw funds from the account.
3. Get the current balance of the account.*/

#include <iostream>
using namespace  std;
class account
{
    int id;
    string name;
    float balance;
public:
	void get(int i ,string n ,float b)
	{
	id=i;
	name = n;
	balance=b;
	}
    void deposit()
    {
    	float b;
    	cout<<"How much many you want you deposit = ";
    	cin>>b;
	balance=balance+b;
    }
    void wd(float b)
    {
    	cout<<"How much many you want you Widdoro = ";
    	cin>>b;
	balance=balance-b;
    }
    void display()
    {
        cout<<"Id is : "<<id<<endl;
        cout<<"name bbu : "<<name<<endl;
        cout<<"balance magi : "<<balance<<endl;
    }

};
int main()
{
    account husbey ;
    husbey.get(23203032,"Husbey",1000);
    husbey.display();
    husbey.deposit();
     husbey.display();
    husbey.wd(00);
    husbey.display();

}
