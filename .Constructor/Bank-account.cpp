/*1: Design a C++ class to represent a Bank account. The class should have the following attributes:
account number, account holder name, account balance. The class should also have the following
methods: deposit(), withdraw(), getBalance() and displayAccountDetails(). The class should have
a constructor that initializes the account number, account holder name and account balance.Write
a C++ program to create a Bank account object and deposit and withdraw some money from the
account. Then display the account details.*/
#include<iostream>
using namespace std;
class BA
{
    float Balance;
    string AccoubtName,AHN;
public:
    BA()
    {
        cout<<"Account name = ";
        cin>>AccoubtName;
        cout<<"Name  = ";
        cin>>AHN;
        cout<<"Balance = ";
        cin>>Balance;
    }
    void deposit()
    {
        float DB;
        cout<<"Deposit your Acount = ";
        cin>>DB;
        Balance=Balance+DB;
    }
    void wd()
    {
        float n;
        cout<<"How much you want Withdrow = ";
        cin>>n;
        Balance=Balance-n;
    }
    void display()
    {
        cout<<"Account name = "<<AccoubtName<<endl<<"Name = "<<AHN<<endl<<"Balance = "<<Balance<<endl;
    }
};
int main()
{
    BA obj;
    obj.display();
    obj.deposit();
    obj.display();
    obj.wd();
    obj.display();
    return 0;
}
