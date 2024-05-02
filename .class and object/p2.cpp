#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name, roll_no;
    void input()
    {
        cin>>name>>roll_no;
    }
    void output ()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<roll_no<<endl;
    }
};
int main ()
{
    student s1;
    cout<<"Enter the student name:"<<endl;
    s1.input();
    s1.output();

    return 0;
}
