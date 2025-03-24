#pragma once
#include "Service.h"
class Fillers : public Service 
{
private:
	int mlOfFillers;
	string facePart;
	Employee* employee;
public:
	Fillers(string nameOfService, int duration, int price, int mlOfFillers, string facePart, Employee * employee);
	virtual ~Fillers();

	string description() const override;
	string getInformation() const override;
};

