#include<bits/stdc++.h>
using namespace std;
class Area
{
public:
    double a,b;
    void input(int x,int y)
    {
        cout<<"Input length and wide:"<<endl;
        cin>>x>>y;
        a=x;
        b=y;
    }
    int returnArea(int x,int y)
    {
        return a*b;
    }
};
int main()
{
    Area a1;
    double x,y;
    a1.input(x,y);
    cout<<"area:"<<a1.returnArea(x,y);
return 0;
}

