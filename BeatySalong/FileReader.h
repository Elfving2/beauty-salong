#pragma once
#include "string"
using namespace std;
#include <iostream>
#include <fstream>

class FileReader
{
private:
	string customerFile = "Customer.txt";
	string appointmentFile = "Appointments.txt";
	string ServicesFile = "Services.txt";
	string employeeFile = "Employees.txt";
public:
	FileReader();
	~FileReader();
	void writeToCustomerFile(const string& toWrite);
	void writeToAppointmentFile(const string& toWrite);
	string readFromCustomerFile();
	string readFromServices();
	string readFromEmployeeFile();
	
	
};

