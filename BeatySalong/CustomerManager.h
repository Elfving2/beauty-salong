#pragma once
#include "Customer.h"'
#include <iostream>
#include <vector>
#include <sstream>

class CustomerManager
{
private:
	vector<Customer> customers;

public:
	vector<string> split(const string& str, char delimiter);
	void parseCustomerData(const string& customerFileResult);
	void listAllCustomers();
	Customer validateIfCustomerExists(const string& phonenumber);
};

