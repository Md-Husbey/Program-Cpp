#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    string name, address;
    int year;
    void input()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Year of joining: ";
        cin>>year;
        cout<<"address: ";
        cin>>address;
    }
    void output()
    {
      cout<<name<<"    "<<year<<"    "<<address<<endl;
    }
};
int main()
{
    Employee e1,e2,e3;
    e1.input();
    e2.input();
    e3.input();
     cout<<"Name   Year of joinning   Address"<<endl;
    e1.output();
    e2.output();
    e3.output();


    return 0;
}
