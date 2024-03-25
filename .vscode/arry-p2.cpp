

#include<iostream>
using namespace std;
class student
{
private:
    int rno;
    char name[20];
    float avg;


public:
    void getData();
    void display();
    void mark();
};
void student::getData()
{
    cout<<"Enter Roll number = ";
    cin>>rno;
    cout<<"Name = ";
    cin>>name;
    cout<<"Enter Avg mark = ";
    cin>>avg;
}
void student::mark(void)
{
    int m,j,h,mark;

    cout<<"Enter mark = ";
    cin>>m;
    cout<<"Enter mark = ";
    cin>>j;
    cout<<"Enter mark = ";
    cin>>h;



}
void student::display()
{

    cout <<rno<<"/t"<<name<<"/t"<<avg<<endl;

}

int main()
{
    student s[5];
    for (int i=0; i<5; i++)
    {
        s[i].getData();
    }
    cout<<"student enformation id "<<endl;
    cout<<"roll \t Name \t Avg"<<endl;



    for (int i=0; i<5; i++)
    {
        s[i].mark();

    }
    cout <<"input mark "<<" = ";




    return 0;
}
