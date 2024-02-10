#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,fibo,count=0,i;
    cout<<"input a valu = ";
    cin>>i;
    while(count<i)
    {
        if (count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=n1+n2;
            n1=n2;
            n2=fibo;
        }
        cout<< fibo <<" " ;
        count++;
    }
}
