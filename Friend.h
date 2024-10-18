#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Date.h"
#include "person.h"
class Friend : public person
{
	Date date_of_birth;
public:
	Friend();
	Friend(string surname, string address, int number, Date date_of_birth);

	Date getDate()const;
	void setDate(Date date_of_birth);

	void showInfo()const override;
};

