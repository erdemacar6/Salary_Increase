#include "Workers.h"
#include <iostream>

using namespace std;

void Workers::showInfos() {
    cout << "Name: " << getName() << endl;
    cout << "Department: " << getDepartment() << endl;
    cout << "ID: " << getId() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Salary: " << getSalary() << endl;
    cout << "Department Number: " << getDep() << endl;
}

void Workers::showDepartment() {
    cout << "******************************" << endl;
    cout << "Please select your department!" << endl;
    cout << "******************************" << endl;
    cout << "\n 1. Software Development\n";
    cout << "\n 2. Database Management\n";
    cout << "\n 3. Management Department\n";
    cout << "\n 4. IT Security Department\n";
    cout << "\n 5. Law Department\n";
}

void Workers::salaryIncrease() {
    cout << "Your current salary is: " << getSalary() << endl;

    if (getDep() == 1) {
        setSalary(getSalary() + 20000);
    } else if (getDep() == 2) {
        setSalary(getSalary() + 18000);
    } else if (getDep() == 3) {
        setSalary(getSalary() + 15000);
    } else if (getDep() == 4) {
        setSalary(getSalary() + 12000);
    } else if (getDep() == 5) {
        setSalary(getSalary() + 10000);
    } else {
        cout << "Invalid department number!" << endl;
        return;
    }

    cout << "New salary: " << getSalary() << endl;
}


void Workers::enterInfos() {
    string name, department;
    int id, age, salary, dep;

    cout << "Enter your name: ";
    getline(cin, name);
    setName(name);

    cout << "Enter your department: ";
    getline(cin, department);
    setDepartment(department);

    cout << "Enter your department number (1, 2, 3, 4, 5): ";
    cin >> dep;
    setDep(dep);

    cout << "Enter your ID: ";
    cin >> id;
    setId(id);

    cout << "Enter your age: ";
    cin >> age;
    setAge(age);

    cout << "Enter your salary: ";
    cin >> salary;
    setSalary(salary);
}
