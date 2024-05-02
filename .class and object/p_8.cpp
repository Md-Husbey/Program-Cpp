#include<bits/stdc++.h>
using namespace std;
class Complex
{
    public:
    int real1, img1;
    int real2, img2;
    int real3, img3;
    void input()
    {
    cout<<"Enter the 1st real number and imaginery number:";
    cin>>real1>>img1;
    cout<<"Enter the 2nd real number and imaginery number:";
    cin>>real2>>img2;

    }
    void output()
    {
    cout<<"Enter the 1st real number and imaginery number:"<<endl;
    cout<<real1<<"+"<<img1<<"i";cout<<endl;
    cout<<"Enter the 2nd real number and imaginery number:"<<endl;
    cout<<real2<<"+"<<img2<<"i";cout<<endl;
    }
    void add()
    {
        real3=real1+real2;
        img3=img1+img2;
        cout<<"addition of two complex number: ";
        if(img3>0)
        {
            cout<<real3<<"+"<<img3<<"i";
        }
        else
        {
            cout<<real3<<" "<<img3<<"i";
        }cout<<endl;
    }
    void dif()
    {
        real3=real1-real2;
        img3=img1-img2;
        cout<<"addition of two complex number: ";
        if(img3>0)
        {
            cout<<real3<<"-"<<img3<<"i";
        }
        else
        {
            cout<<real3<<"+"<<img3<<"i";
        }cout<<endl;
    }
    void pro()

    {
        real3=(real1*real2)-(img1*img2);
        img3=(real1*img2)+(real2*img1);
        cout<<"product of two complex number: ";
        if(img3>0)
        {
            cout<<real3<<"+"<<img3<<"i";
        }
        else
        {
            cout<<real3<<" "<<img3<<"i";
        }cout<<endl;

    }

};
int main()
{
    Complex c1;
    c1.input();
    c1.output();
    c1.add();
    c1.dif();
    c1.pro();

    return 0;
}
