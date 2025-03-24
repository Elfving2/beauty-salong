#include "Employee.h"
#include "string"
#include "iostream"
using namespace std;

Employee::Employee(string firstname, string lastname, int age, int yearsOfExperience)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->age = age;
    this->yearsOfExperience = yearsOfExperience;
}

Employee::~Employee()
{
}

void Employee::description()
{
    cout << "Firstname: " + this->firstname << endl;
    cout << "Lastname: " + this->lastname << endl;
    cout << "Age: " + to_string(this->age) << endl;
    cout << "Experience: " + to_string(this->yearsOfExperience) + " Years" << endl << endl;
}

string Employee::getInformation()
{
    return this->firstname + "," + this->lastname + "," + to_string(this->age) + "," + to_string(this->yearsOfExperience);
}
