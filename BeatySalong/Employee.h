#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>

using namespace std;

class Employee
{
private:
	string firstname;
	string lastname;
	int age;
	int yearsOfExperience;

public:
	Employee(string firstname, string lastname, int age, int yearsOfExperience);
	~Employee();
	void description();
	string getInformation();
};

#endif