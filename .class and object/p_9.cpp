#include<bits/stdc++.h>
using namespace std;
class volume
{
    public:
        double length, breadth,height,volume1;
    void input(int a,int b,int c)
    {
        cout<<"length,breadth,height:"<<endl;
        cin>>a>>b>>c;
        length=a;
        breadth=b;
        height=c;

    }
    void Volume(int a,int b,int c)
    {
        volume1=length*breadth*height;
        cout<<"Volume of the box:"<<volume1;
    }
};
int main()
{
    volume v1;
   int a,b,c;
   v1.input(a,b,c);
   v1.Volume(a,b,c);


    return 0;
}
