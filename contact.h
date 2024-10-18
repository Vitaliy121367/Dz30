#pragma once
#include <iostream>
#include <string>
using namespace std;
class contact
{
	int number;
public:
	contact();
	contact(int number);

	int getNumber()const;
	void setNumber(int number);

	virtual void showInfo()const;
};

