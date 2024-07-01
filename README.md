
Overview
This C++ project implements a simple company employee management system using object-oriented programming concepts like classes and inheritance. It includes classes for different types of employees (Employee, Manager, Engineer, Salesperson) and a Company class to manage employees within the company.

Classes
-Employee
Base class for all employees.
Attributes: name, ID, designation, salary.
Methods: display() to show employee details.
-Manager
Inherits from Employee.
Additional attribute: department.
Methods: display() to override base class method.
-Engineer
Inherits from Employee.
Additional attribute: specialization.
Methods: display() to override base class method.
-Salesperson
Inherits from Employee.
Additional attribute: salesTarget.
Methods: display() to override base class method.
-Company
Manages employees.
Attributes: name, salesTaxNumber, numberOfEmployees, employees (array of pointers to Employee objects).
Methods: addEmployee() to add employees, getNumberEmployees() to retrieve the count, displayEmployees() to display employee details.
