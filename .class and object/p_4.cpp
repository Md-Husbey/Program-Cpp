#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    float area=0,s=0,p;
    int x,y,z;
    void input( int a,int b,int c)
    {
        cin>>a>>b>>c;
        x=a;
        y=b;
        z=c;
    }
    void output ( int a,int b,int c)
    {
        p=x+y+z;
        s=p/2;
        area=sqrt(s*(s-x)*(s-y)*(s-z));
        cout<<"Area :"<<area<<endl;
        cout<<"Perimeter:"<<p<<endl;

    }
};
int main ()
{
    triangle s1;
    int a,b,c;
    cout<<"Three side of triangle:"<<endl;
    s1.input(a,b,c);
    s1.output(a,b,c);
    return 0;
}


