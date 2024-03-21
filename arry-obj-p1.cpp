#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    float salary;
    string dateOfJoining;
  
    void inputDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
        cout << "Enter date of joining: ";
        getline(cin, dateOfJoining);
    }
   
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Date of Joining: " << dateOfJoining << endl;
    }
};

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];
   
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        employees[i].inputDetails();
    }
   
    cout << "\nDetails of all employees:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i].displayDetails();
        cout << endl;
    }
    
    return 0;
}
