// driver.cpp

#include "company.h"
#include <iostream>

int main() {
    // Create a company with name, sales tax number, and number of employees
    Company* syst = new Company("System Private Ltd", "111-121-131", 3);

    for (int i = 0; i < syst->getNumberEmployees(); i++) {
        // Ask user the type of employee and add objects of manager, engineer or salesperson
       string empType;
       cout << "Enter employee type (Manager, Engineer, or Salesperson): ";
       cin >> empType;

        string name;
        int ID;
        string designation;
        double salary;

        cout << "Enter " << empType << " details:" << std::endl;
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> ID;
        cout << "Designation: ";
        cin >> designation;
        cout << "Salary: ";
        cin >> salary;

        if (empType == "Manager") {
            string department;
            cout << "Department: ";
            cin >> department;
            syst->addEmployee (new Manager(name, ID, designation, salary, department),i);
          

            std::cout << "Manager added successfully!" << endl;
        }
        else if (empType == "Engineer") {
            string specialization;
            cout << "Specialization: ";
            cin >> specialization;
            syst->addEmployee( new Engineer(name, ID, designation, salary, specialization),i);
            cout << "Engineer added successfully!" << endl;
        }
        else if (empType == "Salesperson") {
            double salesTarget;
            cout << "Sales Target: ";
            cin >> salesTarget;
            syst->addEmployee(new Salesperson(name, ID, designation, salary, salesTarget),i);
            cout << "Salesperson added successfully!" << endl;
        }
    }

    cout << "\nEmployees Information:\n";
    syst->displayEmployees();

    delete syst;

    return 0;
}
