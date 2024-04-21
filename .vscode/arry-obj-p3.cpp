#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<float> heights(numStudents);
    cout<< "Enter heights of students in meters :" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter height for student " << i + 1 << ": ";
        cin >> heights[i];
    }
    float totalHeight = 0;
    for (int i = 0; i < numStudents; ++i) {
        totalHeight += heights[i];
    }
    float averageHeight = totalHeight / numStudents;
    cout << "Average height of the class: " << averageHeight << " meters" << endl;

    return 0;
}
