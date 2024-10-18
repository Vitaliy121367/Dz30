#include "person.h"

person::person()
{
    surname = "undefined";
    address = "undefined";
}

person::person(string surname, string address, int number):contact(number)
{
    this->surname = surname;
    this->address = address;
}

string person::getSurname() const
{
    return surname;
}

string person::getAddress() const
{
    return address;
}

void person::setSurname(string surname)
{
    this->surname = surname;
}

void person::setAddress(string address)
{
    this->address = address;
}

void person::showInfo() const
{
    cout << "Surname: " << surname << endl;
    cout << "Address: " << address << endl;
    contact::showInfo();
}
