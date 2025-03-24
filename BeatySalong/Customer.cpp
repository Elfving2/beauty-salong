#include "Customer.h"
#include "iostream"

Customer::Customer(string firstname, string lastname, string phonenumber)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->phoneNumber = phonenumber;
}

Customer::Customer()
{
}

Customer::~Customer()
{
}

Customer& Customer::operator=(const Customer& other)
{
	if (this == &other) return *this;

	this->firstname = other.firstname;
	this->lastname = other.lastname;
	this->phoneNumber = other.phoneNumber;
}

const string Customer::getPhonenumber()
{
	return this->phoneNumber;
}

const string Customer::getInformation()
{
	return this->firstname + "," + this->lastname + "," + this->phoneNumber;
}

void Customer::description()
{
	cout << "firstname: " + this->firstname << endl;
	cout << "lastname: " + this->lastname << endl;
	cout << "phonenumber: " + this->phoneNumber << endl;
}

