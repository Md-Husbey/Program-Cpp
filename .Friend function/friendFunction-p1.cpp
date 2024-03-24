#include<iostream>
using namespace std;

class test{
    int price[5], sum = 0;

    public:
    void input(){
        cout<<"PLZ Enter your five product price = ";
        for (int i = 0; i < 5; i++)
        {
            cin>>price[i];
        }
    }

    friend int total(test Obj);
};

int total(test Obj){
    for (int i = 0; i < 5; i++)
    {
        Obj.sum += Obj.price[i];
    }
    cout<<"Five products = "<<Obj.sum;
}

int main(){
    test Obj;
    Obj.input();

    total(Obj);

    return 0;
}