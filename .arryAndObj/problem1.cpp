/*1. Write a program to print the name, salary, and date of joining of 10 employees in a
company. Use an array of objects.*/
#include<iostream>
using namespace std;
class emp
{
public:
    string name;
    float salary, date;
    void get()
    {
        cout<<"input the name = ";
        cin>>name;
        cout<<"input the salary = ";
        cin>>salary;
        cout<<"input the date = ";
        cin>>date;

    }
    void display()
    {
        cout<<"input the name = "<<name<<endl<<"input the salary = "<<salary<<endl<<"input the date = "<<date<<endl;
    }

};
int main()
{
    emp obj[10];
    for(int i=0; i<10; i++)
    {

        obj[i].get();
    }
    cout<<"upter update"<<endl;
    for(int i=0; i<10; i++)
    {

        obj[i].display();
    }
}
