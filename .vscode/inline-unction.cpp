#include <iostream>
using namespace std;
inline char grade(int n)
{
    if (n >= 90)
        cout << "your grade is: f" << endl;
    else if (n >= 80)
        cout << "your grade is: f" << endl;
    else if (n >= 70)
        cout << "your grade is: f" << endl;
    else if (n >= 60)
        cout << "your grade is: f" << endl;
    else
        cout << "your grade is: f" << endl;
}

int main()
{
    int mark;
    cout << "Enter the  Mark: ";
    cin >> mark;
    if (mark < 0 || mark > 100)
    {
        cout << "Invalid mark! " << endl;
    }
    else {

    grade(mark);
    }
    return 0;
}

