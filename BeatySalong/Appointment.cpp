#include "Appointment.h"
#include <iostream>
#include <sstream>

Appointment::Appointment(Customer customer, Service* service, string date)
{
	this->customer = customer;
	this->service = service;
	this->date = date;
}

Appointment::~Appointment()
{
}
