#ifndef HAIRCUT_H
#define HAIRCUT_H
#include "service.h"


class Haircut : public Service
{
private:
	string cutLength;
	Employee* employee;
public:
	Haircut(string nameOfService, int duration, int price, Employee * employee, string cutLength);
	virtual ~Haircut();
	string description() const override;
	string getInformation() const override;
};

#endif