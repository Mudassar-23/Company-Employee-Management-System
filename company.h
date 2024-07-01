#pragma once
#ifndef COMPANY_H
#define COMPANY_H

#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int ID;
    string designation;
    double salary;

public:
   
    Employee(string empName, int empID, string empDesignation, double empSalary);

    ~Employee();

    void display();
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string empName, int empID, string empDesignation, double empSalary, string empDepartment);

    void display();
};

class Engineer : public Employee {
private:
    string specialization;

public:
    Engineer(string empName, int empID, string empDesignation, double empSalary, string empSpecialization);

    void display();
};

class Salesperson : public Employee {
private:
    double salesTarget;

public:
    Salesperson(string empName, int empID, string empDesignation, double empSalary, double empSalesTarget);

    void display();
};

class Company {
private:
    string name;
    string salesTaxNumber;
    int numberOfEmployees;
    Employee** employees;

public:
    Company(string companyName, string companySalesTaxNumber, int numEmployees);

    ~Company();

    void addEmployee(Employee *emp,int index);
     
    int getNumberEmployees();

    void displayEmployees();
};

#endif 
