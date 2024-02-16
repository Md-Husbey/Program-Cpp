#include <iostream>
using namespace std;
inline char grade(int n)
{
    if (n >= 90)
        return 'A';
    else if (n >= 80)
        return 'B';
    else if (n >= 70)
        return 'C';
    else if (n >= 60)
        return 'D';
    else
        return 'F';
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
    cout << "your grade is: " <<grade(mark) << endl;
    return 0;
}

