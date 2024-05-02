#include<bits/stdc++.h>
using namespace std;
class rectangular
{
public:
    float len,wid, area;
    void input( int a,int b)
    {
        len=a;
        wid=b;
    }
    int Area ( int a,int b)
    {
        area=(len*wid);
        return area;
    }
};
int main ()
{
    rectangular s1,s2;
    double a,b,c,d;
    cout<<"Two side of rectangular 1 :"<<endl;
    cin>>a>>b;
    s1.input(a,b);
    cout<<"Two side of rectangular 2 :"<<endl;
    cin>>c>>d;
    s2.input(c,d);
    cout<<"area of rectangular 1 :"<<s1.Area(a,b)<<endl;
    cout<<"area of rectangular 2 :"<<s2.Area(c,d)<<endl;
    return 0;
}


