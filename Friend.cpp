#include "Friend.h"

Friend::Friend()
{
    date_of_birth = Date();
}

Friend::Friend(string surname, string address, int number, Date date_of_birth):person(surname, address, number)
{
    this->date_of_birth = date_of_birth;
}

Date Friend::getDate() const
{
    return date_of_birth;
}

void Friend::setDate(Date date_of_birth)
{
    this->date_of_birth = date_of_birth;

}

void Friend::showInfo() const
{
    person::showInfo();
    cout << "Date of birth: " << date_of_birth << endl;
}
