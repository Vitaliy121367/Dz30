#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "contact.h"
class colleague : public contact
{
	string organization;
	string address;
	bool fax;
	string person;
public:
	colleague();
	colleague(string organization, string address, int number, bool fax, string person);

	string getOrganization()const;
	string getAddress()const;
	bool getFax()const;
	string getPerson()const;

	void setOrganization(string organization);
	void setAddress(string address);
	void setFax(bool fax);
	void setPerson(string person);

	void showInfo()const override;
};

