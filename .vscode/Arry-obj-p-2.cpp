#include <iostream>
#include <iomanip>
using namespace std;

class Student {
public:
    static int nextRollNumber;
    int rollNumber;
    float marks[3];
    Student() {
        rollNumber = nextRollNumber++;
    }
   
    void inputMarks() {
        cout << "Enter marks for student with roll number " << rollNumber << ":" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 3; ++i) {
            sum += marks[i];
        }
        return sum / 3.0;
    }
};
int Student::nextRollNumber = 1;

int main() {
    const int numStudents = 8;
    Student students[numStudents];
   
    for (int i = 0; i < numStudents; ++i) {
        students[i].inputMarks();
    }
  
    cout << "\nRoll Number   Average Marks" << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i < numStudents; ++i) {
        float average = students[i].calculateAverage();
        cout << setw(6) << students[i].rollNumber << setw(14) << fixed << setprecision(2) << average << endl;
    }
    
    return 0;
}
