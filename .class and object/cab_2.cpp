#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string roll_number,phone_number,address;
    void input()
    {
        cin>>roll_number>>phone_number>>address;
    }
    void output ()
    {
        cout<<"Roll number :"<<roll_number<<endl;
        cout<<"phone number:"<<phone_number<<endl;
        cout<<"Address     :"<<address<<endl;

    }
};
int main ()
{
    student s1,s2;
    cout<<"Enter the details of Sam:"<<endl;
    s1.input();
    cout<<"Enter the details of jon:"<<endl;
    s2.input();
    cout<<"the details of Sam:"<<endl;
    s1.output();
    cout<<"the details of  Jon:"<<endl;
    s2.output();

    return 0;
}

