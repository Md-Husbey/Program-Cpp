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
	balance=balance+b;
    }
    void wd(float b)
    {
    	cout<<"How much many you want you deposit = \n";
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
    husbey.get(5626,"husbey",575.3);
    husbey.display();
    husbey.deposit();
    husbey.wd(362);
    husbey.display();

}
