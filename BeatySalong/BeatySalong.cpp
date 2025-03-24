// BeatySalong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    cout << "2: Haircut" << endl;
    cout << "3: Styling" << endl;
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
                    // Fillers
                    // Choose your "worker"
                    // Enter amount of ml
                    string data = reader.readFromEmployeeFile();
                    employeeManager.parseEmployeeData(data);
                    employeeManager.listAllEmployees();

                    // string nameOfService, int duration, int price, int mlOfFillers, string facePart, Employee * employee                  
                    //Service * fillers = new Fillers();
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

    //Customer customerTuva("Tuva", "rutberg","07545291");
    //Service* Fillers1 = new Fillers("fillers", 50, 30, 1, "mun", new Employee("Petra","filler-queen"));

    //Appointment appointment;
    //string result = appointment.addAppointment(customerTuva, Fillers1, "2001-02-22,14:50");

    //FileReader reader;
    //reader.writeToAppointmentFile(result);  
}