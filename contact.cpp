#include "contact.h"

contact::contact()
{
    number = 0000000000;
}

contact::contact(int number)
{
    this->number = number;
}

int contact::getNumber() const
{
    return number;
}

void contact::setNumber(int number)
{
    this->number = number;
}

void contact::showInfo() const
{
    cout << "Number: 0" << number << endl;
}
