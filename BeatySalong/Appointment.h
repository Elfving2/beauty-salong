#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include "Service.h"
#include <iostream>
#include "Customer.h"
#include "Fillers.h"
#include "Styling.h"
#include "Haircut.h"
#include <string>

using namespace std;

class Appointment
{
	private:
		Customer customer;
		Service * service;
		string date;
	public:
		Appointment(Customer customer, Service * service, string date);
		virtual ~Appointment();
		

	};

#endif