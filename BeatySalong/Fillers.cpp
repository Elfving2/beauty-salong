#include "Fillers.h"

Fillers::Fillers(string nameOfService, int duration, int price, int mlOfFillers, string facePart, Employee* employee)
	: Service(nameOfService, duration, price, employee)
{
	this->mlOfFillers = mlOfFillers;
	this->facePart = facePart;
	this->employee = employee;
}

Fillers::~Fillers()
{
}

string Fillers::description() const
{
	return Service::description() +
		"milliliter: " + to_string(this->mlOfFillers) +
		"\nLipcolor: " + this->facePart;
}

string Fillers::getInformation() const
{
	return Service::getInformation() + "," + to_string(this->mlOfFillers) + "," + this->facePart + "," + this->employee->getInformation();
}
