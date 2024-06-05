#ifndef WORKERS_H
#define WORKERS_H

#include <string>

using namespace std;

class Workers {
private:
    string name;
    string department;
    int id;
    int age;
    int salary;
    int dep;

public:

    Workers() : name(""), department(""), id(0), age(0), salary(0), dep(0) {}

    Workers(string name, string department, int id, int age, int salary, int dep) {
        this->name = name;
        this->department = department;
        this->id = id;
        this->age = age;
        this->salary = salary;
        this->dep = dep;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setDepartment(string department) {
        this->department = department;
    }

    string getDepartment() {
        return department;
    }

    void setId(int id) {
        this->id = id;
    }

    int getId() {
        return id;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() {
        return age;
    }

    void setSalary(int salary) {
        this->salary = salary;
    }

    int getSalary() {
        return salary;
    }

    void setDep(int dep) {
        this->dep = dep;
    }

    int getDep() {
        return dep;
    }

    void showInfos();
    void salaryIncrease();
    void showDepartment();
    void currentSalary1();
    void currentSalary2();
    void currentSalary3();
    void currentSalary4();
    void currentSalary5();
    void enterInfos();
};

#endif
