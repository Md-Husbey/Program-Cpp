/*1. Create a class named Person with a data member to store the name of the person.
Create another class named Student that inherits from the Person class and has a data
member to store the student ID. Write a program to create a Student object and print
out their name and ID.*/
#include<iostream>
using namespace std;
class person
{


public:
    string name;
    void get()
    {

        cout<<"input name "<<name;

    }
};
class student: public person
{


public:
    int id;
    void get2()
    {
        cout<<"input name "<<name<<endl;

        cout<<"input id "<<id;


    }

};
int main()
{

    student obj;
obj.id=55;
obj.name="husbey";
    obj.get2();
    return 0;
}
