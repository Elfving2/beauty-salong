#include <iostream>
#include "FileReader.h"
#include "Appointment.h"
#include <iostream>
#include <vector>
#include "CustomerManager.h"
#include "EmployeeManager.h"

using namespace std;


void appointmentMenu() {
    cout << "1: Fillers" << endl;
    cout << "2: Styling" << endl;
    cout << "3: Haircut" << endl;
}

void bookingProgram(string selection) 
{
    FileReader reader;
    CustomerManager customerManager;
    EmployeeManager employeeManager;
    int usrInput = stoi(selection);

    switch (usrInput) 
    {
        case 1:
        {
            string firstname;
            string lastname;
            string phonenumber;

            cout << "Enter your first name" << endl;
            getline(cin, firstname);

            cout << "Enter your lastname" << endl;
            getline(cin, lastname);

            cout << "Enter your phonenumber" << endl;
            getline(cin, phonenumber);

            string result = firstname + "," + lastname + "," + phonenumber;
            reader.writeToCustomerFile(result);
            break;
        }
        case 2: {
            string data = reader.readFromCustomerFile();

            customerManager.parseCustomerData(data);
            customerManager.listAllCustomers();
            break;
        }
        case 3: {
            string phonenumber;
            cout << "Enter phonenumber" << endl;
            getline(cin, phonenumber);

            string data = reader.readFromCustomerFile();
            customerManager.parseCustomerData(data);
            customerManager.validateIfCustomerExists(phonenumber);
        }
        case 4: {
            appointmentMenu();
            string input;
            cout << "Enter what type of appointment" << endl;
            getline(cin, input);
            int usrInput = stoi(input);

            switch (usrInput) {
                case 1: {
                    string data = reader.readFromEmployeeFile();
                    employeeManager.parseEmployeeData(data);
                    employeeManager.listAllEmployees();
                    
                    cout << "Enter the employee you want to do the appointment" << endl;
                    getline(cin, input);
                    usrInput = stoi(input);

                    if (usrInput >= 1 && usrInput <= 5) {
                        Employee* selectedEmployee = new Employee(employeeManager.getEmployees()[usrInput - 1]);

                        string mlOfFillers;
                        string facePart;
                        string date;

                        cout << "How many mililiter of botox do you want?" << endl;
                        getline(cin, mlOfFillers);

                        cout << "What facepart do you want the botox?" << endl;
                        getline(cin, facePart);

                        cout << "Enter the date of the appointment" << endl;
                        getline(cin, date);

                        Service* fillers = new Fillers("Fillers", 40, 500, stoi(mlOfFillers), facePart, selectedEmployee);
                        
                        string phonenumber;
                        cout << "Enter phonenumber" << endl;
                        getline(cin, phonenumber);

                        string data = reader.readFromCustomerFile();
                        customerManager.parseCustomerData(data);
                        Customer customer = customerManager.validateIfCustomerExists(phonenumber);

                        reader.writeToAppointmentFile(customer.getInformation() + "," + fillers->getInformation() + "," + date);
                    }
                    break;  
                }
                case 2: {
                    string data = reader.readFromEmployeeFile();
                    employeeManager.parseEmployeeData(data);
                    employeeManager.listAllEmployees();

                    cout << "Enter the employee you want to do the appointment" << endl;
                    getline(cin, input);
                    usrInput = stoi(input);

                    if (usrInput >= 1 && usrInput <= 5) {
                        Employee* selectedEmployee = new Employee(employeeManager.getEmployees()[usrInput - 1]);

                        string eyeShadowColor;
                        string lipColor;
                        string hairStyling;
                        string date;

                        cout << "Enter the eyeShadowColor" << endl;
                        getline(cin, eyeShadowColor);

                        cout << "Enter lipcolor" << endl;
                        getline(cin, lipColor);

                        cout << "Enter type of hairstyling" << endl;
                        getline(cin, hairStyling);

                        cout << "Enter the date of the appointment" << endl;
                        getline(cin, date);

                        Service* styling = new Styling("Styling", 50, 699, selectedEmployee, eyeShadowColor, lipColor, hairStyling);
                       
                        string phonenumber;
                        cout << "Enter phonenumber" << endl;
                        getline(cin, phonenumber);

                        string data = reader.readFromCustomerFile();
                        customerManager.parseCustomerData(data);
                        Customer customer = customerManager.validateIfCustomerExists(phonenumber);


                        reader.writeToAppointmentFile(customer.getInformation() + "," + styling->getInformation() + "," + date);
                    }
                    break;
                }
                case 3: {
                    string data = reader.readFromEmployeeFile();
                    employeeManager.parseEmployeeData(data);
                    employeeManager.listAllEmployees();
                    //employeeManager.

                    cout << "Enter the employee you want to do the appointment" << endl;
                    getline(cin, input);
                    usrInput = stoi(input);

                    if (usrInput >= 1 && usrInput <= 5) {
                        Employee* selectedEmployee = new Employee(employeeManager.getEmployees()[usrInput - 1]);

                        string cutLength;
                        string date;

                        cout << "Enter the length you want to cut" << endl;
                        getline(cin, cutLength);

                        cout << "Enter the date of the appointment" << endl;
                        getline(cin, date);

                        Service* haircut = new Haircut("Haircut", 30, 299, selectedEmployee, cutLength);

                        string phonenumber;
                        cout << "Enter phonenumber" << endl;
                        getline(cin, phonenumber);

                        string data = reader.readFromCustomerFile();
                        customerManager.parseCustomerData(data);
                        Customer customer = customerManager.validateIfCustomerExists(phonenumber);

                        reader.writeToAppointmentFile(customer.getInformation() + "," + haircut->getInformation() + "," + date);
                    }
                    break;
                }

            }
        }
    }
}

void menu() {
    cout << "1: Add customer" << endl;
    cout << "2: List all Customers" << endl;
    cout << "3: Validate if customer exists" << endl;
    cout << "4: Create appointment" << endl;
    cout << "5: List all appointments" << endl;
    cout << "6: Display appointments for specific customer";
}

int main()
{




    FileReader reader;
    menu();
    string input;
    cout << "Enter choice" << endl;

    getline(cin, input);
    bookingProgram(input);
}