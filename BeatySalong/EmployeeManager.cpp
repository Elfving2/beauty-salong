#include "EmployeeManager.h"

vector<string> EmployeeManager::split(const string& str, char delimiter)
{
    vector<string> result;
    istringstream stream(str);
    string token;

    while (getline(stream, token, delimiter)) {
        result.push_back(token);
    }

    return result;
}

void EmployeeManager::parseEmployeeData(const string& employeeFileResult)
{
    vector<string> lines = split(employeeFileResult, '\n');

    for (const auto& line : lines) {
        vector<string> parts = split(line, ',');
        if (parts.size() == 4) {
            employees.emplace_back(parts[0], parts[1], stoi(parts[2]), stoi(parts[3]));
        }
    }
}

void EmployeeManager::listAllEmployees() const
{
    for (Employee employee : employees) {
        employee.description();
    }
}

vector<Employee> EmployeeManager::getEmployees()
{
    return this->employees;
}

