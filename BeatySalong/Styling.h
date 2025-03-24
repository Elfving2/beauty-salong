#include "Service.h"

class Styling : public Service
{
private:
	string eyeShadowColor;
	string lipColor;
	string hairStyling;
	Employee* employee;

public:
	Styling(string nameOfService, int duration, int price, Employee * employee, string eyeShadowColor, string lipColor, string hairStyling);
	virtual ~Styling();
	string description() const override;
	string getInformation() const override;
};

