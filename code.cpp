
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int empId;
    float salary;

public:

    // Default Constructor
    Employee()
    {
        name = "Unknown";
        empId = 0;
        salary = 0;
    }

    // Parameterized Constructor
    Employee(string n, int id, float s)
    {
        name = n;
        empId = id;
        salary = s;
    }

    // Copy Constructor
    Employee(const Employee &e)
    {
        name = e.name;
        empId = e.empId;
        salary = e.salary;
    }

    // Accept Details
    void accept()
    {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Display Details
    void display()
    {
        cout << "\nName   : " << name;
        cout << "\nID     : " << empId;
        cout << "\nSalary : " << salary << endl;
    }

    // Check Employee Salary
    void result()
    {
        if (salary >= 30000)
            cout << "Status : Eligible for Bonus" << endl;
        else
            cout << "Status : Not Eligible for Bonus" << endl;
    }
};

int main()
{
    cout << "-- DEFAULT CONSTRUCTOR --" << endl;

    Employee e1;
    e1.display();
    e1.result();

    cout << "\n-- PARAMETERIZED CONSTRUCTOR --" << endl;

    Employee e2("Rahul", 201, 45000);
    e2.display();
    e2.result();

    cout << "\n-- COPY CONSTRUCTOR --" << endl;

    Employee e3(e2);
    e3.display();
    e3.result();

    cout << "\n-- MEMBER FUNCTION --" << endl;

    Employee e4;
    e4.accept();
    e4.display();
    e4.result();

    return 0;
}
