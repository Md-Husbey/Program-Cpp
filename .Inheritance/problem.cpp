#include<iostream>
using namespace std;
class person
{
string name;
int age;
string id ;
public:
void get(string N,int A,string i)
{
name=N;
age=A;
id=i;
cout<<"Input Name = ";
cin>>name;
cout<<endl;
cout<<"Input Id = ";
cin>>id;
cout<<endl;
cout<<"Input Age = ";
cin>>age;
cout<<endl;

}
};