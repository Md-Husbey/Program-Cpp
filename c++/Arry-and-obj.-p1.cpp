#include<iostream>
using namespace std;
class player
{
 string name;
 int score;
 public:
    void input()
    {
        cout<<"Enter the name:"  <<endl;
        cin>>name;
        cout<<"Enter the score"<<endl;
        cin>>score;
    }
    void output()
    {
        cout<<"Enter the name is:"  <<endl;
        cout<<"Enter the score:"<<endl;
       
    }
};
int main()
{

    player obj[10];
    for(int i=0;i<10;i++)
    {
        obj[i].input();
    }
for(int i=0;i<20;i++)
    {
     obj[i].output();
    }

    return 0;
}