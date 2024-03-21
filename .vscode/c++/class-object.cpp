#include<iostream>
using namespace std;
class product
{
    string ID,name;
    float price;
    int qty;
public:
    product()
    {
        cout<<" constructor called"<<endl;
    }
    void get(string id,string n,int q)
    {
        ID=id;
        name=n;
        qty=q;
    }
    void display()
    {
        cout<<" The ID is:"<<ID<<endl;
        cout<<" The name is:"<<name<<endl;
        cout<<" The quantity is:"<<qty<<endl;

    }
    void up_quantity(int qt)
    {
        qty=10+qt;
        //cout<<qty;
    }


    void temp();
    
    
};

void product :: temp()
{
    cout<<" hi ";
}


int main()
{
    product phone;
   // cout<<"hello"<<endl;
    phone.get("P001","smartphone",10);
    phone.display();
    phone.up_quantity(5);
    cout<<"  after "<<endl;
     phone.display();
    cout<<endl<<endl<< "pen object"<<endl;
    product pen(phone);

    pen.display();



    //phone.temp();
   
    return 0;
}