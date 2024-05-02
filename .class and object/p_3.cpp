#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    int a,b,c;
    double area,s,p;
    void input()
    {
        cin>>a>>b>>c;
    }
    void output ()
    {

        p=a+b+c;
        s=p/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area :"<<area<<endl;
        cout<<"Perimeter:"<<p<<endl;

    }
};
int main ()
{
    triangle s1;
    cout<<"Three side of triangle:"<<endl;
    s1.input();
    s1.output();

    return 0;
}


