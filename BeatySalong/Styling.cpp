#include "Styling.h"

Styling::Styling(string nameOfService, int duration, int price, Employee* employee, string eyeShadowColor, string lipColor, string hairStyling)
	: Service(nameOfService, duration, price, employee)
{
	this->eyeShadowColor = eyeShadowColor;
	this->lipColor = lipColor;
	this->hairStyling = hairStyling;
	this->employee = employee;
}

Styling::~Styling()
{
}

string Styling::description() const
{
	return Service::description() +
		"Eyeshadowcolor: " + this->eyeShadowColor +
		"\nLipcolor: " + this->lipColor +
		"\nHairstyling: " + this->hairStyling;
}

string Styling::getInformation() const
{
	return Service::getInformation() + "," + this->eyeShadowColor + "," + this->lipColor + "," + this->hairStyling + "," + this->employee->getInformation();
}
