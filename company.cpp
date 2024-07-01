#include "company.h"
#include <iostream>
using namespace std;

// Employee class 

Employee::Employee(string empName, int empID, string empDesignation, double empSalary)
    : name(empName), ID(empID), designation(empDesignation), salary(empSalary) {}

Employee::~Employee() {}

void Employee::display() {

    cout << "Name: " << name << ", ID: " << ID << ", Designation: " << designation << ", Salary: $" << salary << endl;


}
// Manager class
Manager::Manager(string empName, int empID, string empDesignation, double empSalary, string empDepartment)
    : Employee(empName, empID, empDesignation, empSalary), department(empDepartment) {}

void Manager::display() {
    cout << "Manager Information:" << endl;
    Employee::display();
    cout << "Department: " << department << endl;
 
}

// Engineer class
Engineer::Engineer(string empName, int empID, string empDesignation, double empSalary, string empSpecialization)
    : Employee(empName, empID, empDesignation, empSalary), specialization(empSpecialization) {}

void Engineer::display() {
    cout << "Engineer Information:" << endl;
    Employee::display();
    cout << "Specialization: " << specialization << endl;
    
}

// Salesperson class 
Salesperson::Salesperson(string empName, int empID, string empDesignation, double empSalary, double empSalesTarget)
    : Employee(empName, empID, empDesignation, empSalary), salesTarget(empSalesTarget) {}

void Salesperson::display() {
    cout << "Salesperson Information:" << endl;
    Employee::display();
    cout << "Sales Target: $" << salesTarget << endl;
   
}

// Company class 
Company::Company(string companyName, string companySalesTaxNumber, int numEmployees)
    : name(companyName), salesTaxNumber(companySalesTaxNumber){

    numberOfEmployees = numEmployees;

  employees = new Employee*[numEmployees];
}

Company::~Company() {
    for (int i = 0; i < numberOfEmployees; i++) {
        delete employees[i];
    }
    delete[] employees;
}

void Company::addEmployee(Employee * emp,int index) {
    employees[index] = emp;
}

int Company::getNumberEmployees() {
    return numberOfEmployees;
}

void Company::displayEmployees() {
    for (int i = 0; i < numberOfEmployees; i++) {

        cout << "Employee " << (i + 1) << ":" << endl;
        employees[i]->display();
        cout << endl;
    }
}
