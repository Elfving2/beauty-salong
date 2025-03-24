#include "FileReader.h"
#include <sstream>

FileReader::FileReader()
{
}

FileReader::~FileReader()
{
}

void FileReader::writeToCustomerFile(const string& toWrite)
{
	ofstream customerFile(this->customerFile, ios::app);
	customerFile << toWrite << endl;
	customerFile.close();
}

void FileReader::writeToAppointmentFile(const string& toWrite)
{
	ofstream customerFile(this->appointmentFile, ios::app);
	customerFile << toWrite << endl;
	customerFile.close();
}

string FileReader::readFromCustomerFile()
{
	ifstream file(this->customerFile);
	ostringstream stringBuilder;

	char character;

	while (file.get(character)) {
		stringBuilder << character;
	}

	return stringBuilder.str();
}

string FileReader::readFromServices()
{
	ifstream file(this->ServicesFile);
	ostringstream stringBuilder;

	char character;

	while (file.get(character)) {
		stringBuilder << character;
	}

	return stringBuilder.str();
}

string FileReader::readFromEmployeeFile()
{
	ifstream file(this->employeeFile);
	ostringstream stringBuilder;

	char character;

	while (file.get(character)) {
		stringBuilder << character;
	}

	return stringBuilder.str();
}
