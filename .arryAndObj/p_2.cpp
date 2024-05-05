/*2. Write a program to print the roll number and average marks of 8 students in three
subjects (each out of 100). The marks are entered by the user and the roll numbers are
automatically assigned.*/

#include <iostream>

using namespace std;

class Student {
public:
    int rollNumber;
    float marks[3];
    void inputMarks() {
        cout << "Enter marks for student with roll number " << rollNumber << ":" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }


    float calculateAverage() {
        float total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        return total / 3.0;
    }


    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
};

int main() {

    Student students[8];


    for (int i = 0; i < 8; i++) {
        students[i].inputMarks();
    }


    cout << "Student Details:" << endl;
    cout << "-----------------------------" << endl;
    for (int i = 0; i < 8; i++) {
        students[i].displayDetails();
        cout << "-----------------------------" << endl;
    }

    return 0;
}
