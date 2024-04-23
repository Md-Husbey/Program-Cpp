/*Create a class named Person with a data member to store the name of the person.
Create another class named Student that inherits from the Person class and has a data
member to store the student ID. Write a program to create a Student object and print
out their name and ID.*/

#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
public:
    Person(){}
    Person (string n){
    name = n;
    }
};

class Student: protected Person{
protected:
    int id;
public:
    Student(){
    cout << "HI"<<endl;}
    Student(string n, int i){
    name = n;
    id = i;
    }
    void print(){
    cout << "Name: "<< name << endl << "ID: "<< id<<endl;
    }
};

int main(){
    Student s("Naim",123);
    s.print();
    return 0;

}


