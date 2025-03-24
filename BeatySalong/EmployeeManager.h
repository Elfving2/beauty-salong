#pragma once
#include "Employee.h"
#include <iostream>
#include <vector>
#include <sstream>

class EmployeeManager
{
private:
    vector<Employee> employees;

public:
    vector<string> split(const string& str, char delimiter);
    void parseEmployeeData(const string& employeeFileResult);
    void listAllEmployees() const;

};

