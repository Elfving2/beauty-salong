#ifndef HAIRCUT_H
#define HAIRCUT_H
#include "service.h"


class Haircut : public Service
{
private:
	string cutLength;
public:
	Haircut(string nameOfService, int duration, int price, Employee * employee, string cutLength);
	virtual ~Haircut();
	string description() const override;
};

#endif