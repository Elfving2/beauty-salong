#include "Haircut.h"

Haircut::Haircut(string nameOfService, int duration, int price, Employee* employee, string cutLength)
    : Service(nameOfService, duration, price, employee)
{
    this->cutLength = cutLength;
    this->employee = employee;
}

Haircut::~Haircut()
{
}

string Haircut::description() const
{
    return Service::description() +
        "\nCutlength: " + this->cutLength;
}

string Haircut::getInformation() const
{
    return Service::getInformation() + "," + this->cutLength + "," + this->employee->getInformation();
}
