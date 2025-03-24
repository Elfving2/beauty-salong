#pragma once
#include "Employee.h"
using namespace std;
class Service
{
private:
	Employee * employee;
	string nameOfService;
	int duration;
	int price;
public:
	Service(string nameOfService, int duration, int price, Employee * employee);
	const int getPrice();
	const int getDuration();
	const string getnameOfService();
	virtual string description() const = 0;
	virtual string getInformation() const = 0;
};

