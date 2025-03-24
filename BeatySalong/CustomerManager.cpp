#include "CustomerManager.h"

vector<string> CustomerManager::split(const string& str, char delimiter)
{
    vector<string> result;
    istringstream stream(str);
    string token;

    while (getline(stream, token, delimiter)) {
        result.push_back(token);
    }

    return result;
}

void CustomerManager::parseCustomerData(const string& customerFileResult)
{
    vector<string> lines = split(customerFileResult, '\n');

    for (const auto& line : lines) {
        vector<string> parts = split(line, ',');
        if (parts.size() == 3) {
            customers.emplace_back(parts[0], parts[1], parts[2]);
        }
    }
}

void CustomerManager::listAllCustomers()
{
    for (Customer customer : customers) {
        customer.description();
    }
}

void CustomerManager::validateIfCustomerExists(const string & phonenumber)
{
    for (Customer customer : customers) {
        cout << customer.getPhonenumber() << phonenumber << endl;
        if (customer.getPhonenumber() == phonenumber) {
            customer.description();
            return;
        }
    }
    cout << "Customer dosent exist!" << endl;
}

