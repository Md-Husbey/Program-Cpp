#include<iostream>
using namespace std;

class Date {
private:
    int year;
    int month;


public:
    void setdata() {
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter month: ";
        cin >> month;
}

    friend bool isLeapYear(const Date& d);
};

bool isLeapYear(const Date& d) {
    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Date d;
    d.setdata();
    bool leap = isLeapYear(d);
    if (leap) {
        cout << "The year is a leap year." << endl;
    } else {
        cout << "The year is not a leap year." << endl;
    }
    return 0;
}