#include "Haircut.h"

Haircut::Haircut(string nameOfService, int duration, int price, Employee* employee, string cutLength)
    : Service(nameOfService, duration, price, employee)
{
    this->cutLength = cutLength;
}

Haircut::~Haircut()
{
}

string Haircut::description() const
{
    return Service::description() +
        "\nCutlength: " + this->cutLength;
}
