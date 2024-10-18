#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "contact.h"
#include "person.h"
#include "Friend.h"
#include "colleague.h"
#include <vector>
#include <algorithm>
using namespace std;
class phone_book
{
	vector<contact*> phoneBook;
public:
	void myPush_back(int num);
	void myPush_back(string surname, string address, int number);
	void myPush_back(string surname, string address, int number, Date date_of_birth);
	void myPush_back(string organization, string address, int number, bool fax, string person);
	void myErase(int num);
	void myEdit(int num);
	void mySort();

	void showInfo()const;
};