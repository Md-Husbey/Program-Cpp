/*Create a class “Number” with protected member ‘num’, ’ sqr’, ‘cube’ constructor that
takes the input of num. Create another class, “Square,” which inherits “Number.” and
has a constructor which finds the square of ‘num’ and assigns it to ‘sqr’ and a public
member function ‘display’ which prints the value; of ‘sqr.’ Create another class,
“Cube,” which inherits “Number.” and has a constructor which finds the cube of
‘num’ and assigns it to ‘cube’ and a public member function ‘print’ which prints the
value. Of ‘cube.’*/

#include<iostream>
using namespace std;

class Number
{
protected:
    int num, sqr, cube;
public:
    Number(int n){
    num = n;
    }
};

class Square : protected Number
{
public:
    Square(int n):Number(n){
        sqr = num*num;
    }
    void display(){
    cout << "Square: "<<sqr<<endl;
    }
};

class Cube : protected Number
{
public:
    Cube(int n):Number(n){
        cube = num*num*num;
    }
    void display(){
    cout << "Cube: "<<cube<<endl;
    }
};


int main(){
    Square s(10);
    s.display();

    Cube c(10);
    c.display();

    return 0;
}
