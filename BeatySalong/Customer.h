#pragma once
#include "string"
using namespace std;

class Customer
{
private:
	string firstname;
	string lastname;
	string phoneNumber;
public:
	Customer(string firstname, string lastname, string phonenumber);
	Customer();
	~Customer();
	Customer& operator=(const Customer& other);
	const string getPhonenumber();
	const string getInformation();
	void description();
};

