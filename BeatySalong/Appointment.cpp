#include "Appointment.h"
#include <iostream>
#include <sstream>

Appointment::Appointment()
{
}

Appointment::~Appointment()
{
}

string Appointment::addAppointment(Customer customer, Service * service, string date) 
{
	//cout << customer.getInformation() << endl;
	//cout << service->getInformation() << endl;
	ostringstream stringBuilder;
	stringBuilder << customer.getInformation() + ",";
	stringBuilder << service->getInformation();

	string result = stringBuilder.str();
	cout << result << endl;

	return result;
}

//bool Appointment::addAppointment(Customer customer, Haircut service, string date)
//{
//	return false;
//}
//
//bool Appointment::addAppointment(Customer customer, Styling service, string date)
//{
//	return false;
//}
