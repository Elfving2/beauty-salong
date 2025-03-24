#include "Styling.h"

Styling::Styling(string nameOfService, int duration, int price, Employee* employee, string eyeShadowColor, string lipColor, string hairStyling)
	: Service(nameOfService, duration, price, employee)
{
	this->eyeShadowColor = eyeShadowColor;
	this->lipColor = lipColor;
	this->hairStyling = hairStyling;
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
