#include<bits/stdc++.h>
using namespace std;
class Area
{
public:
    double a,b;
    void setdim(int x,int y)
    {
        cout<<"Input length and wide:"<<endl;
        cin>>x>>y;
        a=x;
        b=y;
    }
    void getArea(int x,int y)
    {
        cout<< a*b;
    }
};
int main()
{
    Area a1;
    double x,y;
    a1.setdim(x,y);
    cout<<"area:";
    a1.getArea(x,y);
return 0;
}

