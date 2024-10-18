#include "colleague.h"

colleague::colleague()
{
    organization = "undefined";
    address = "undefined";
    fax = 0;
    person = "undefined";
}

colleague::colleague(string organization, string address, int number, bool fax, string person):contact(number)
{
    this->organization = organization;
    this->address = address;
    this->fax = fax;
    this->person = person;
}

string colleague::getOrganization() const
{
    return organization;
}

string colleague::getAddress() const
{
    return address;
}

bool colleague::getFax() const
{
    return fax;
}

string colleague::getPerson() const
{
    return person;
}

void colleague::setOrganization(string organization)
{
    this->organization = organization;
}

void colleague::setAddress(string address)
{
    this->address = address;
}

void colleague::setFax(bool fax)
{
    this->fax = fax;
}

void colleague::setPerson(string person)
{
    this->person = person;
}

void colleague::showInfo() const
{
    cout << "Organization: " << organization << endl;
    cout << "Address: " << address << endl;
    contact::showInfo();
    cout << "Fax: " << fax << endl;
    cout << "Person: " << person << endl;
}
