#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "contact.h"
class person : public contact
{
	string surname;
	string address;
public:
	person();
	person(string surname, string address, int number);

	string getSurname()const;
	string getAddress()const;

	void setSurname(string surname);
	void setAddress(string address);

	void showInfo()const override;
};

