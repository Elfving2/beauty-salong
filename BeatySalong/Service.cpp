#include "Service.h"

Service::Service(string nameOfService, int duration, int price, Employee * employee) : employee(employee)
{
    this->nameOfService = nameOfService;
    this->duration = duration;
    this->price = price;
}

const int Service::getPrice()
{
    return this->price;
}

const int Service::getDuration()
{
    return this->duration;
}

const string Service::getnameOfService()
{
    return this->nameOfService;
}

string Service::description() const
{
    return "Type of service: " + this->nameOfService +
        "\nDuration: " + to_string(this->duration) +
        "\nPrice: " + to_string(this->price) + "\n";
}

string Service::getInformation() const
{
    return this->nameOfService + "," + to_string(this->duration) + "," + to_string(this->price);
}
