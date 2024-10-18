#include "phone_book.h"

void phone_book::myPush_back(int num)
{
	phoneBook.push_back(new contact(num));
}

void phone_book::myPush_back(string surname, string address, int number)
{
	phoneBook.push_back(new person(surname, address, number));
}

void phone_book::myPush_back(string surname, string address, int number, Date date_of_birth)
{
	phoneBook.push_back(new Friend(surname, address, number, date_of_birth));
}

void phone_book::myPush_back(string organization, string address, int number, bool fax, string person)
{
	phoneBook.push_back(new colleague(organization, address, number, fax, person));
}

void phone_book::myErase(int num)
{
    for (int i = 0; i < phoneBook.size(); i++)
    {
        if (i == num)
        {
            phoneBook.erase(phoneBook.begin() + i - 1);
            return;
        }
    }
    cout << "Error!\n";
}

void phone_book::myEdit(int num)
{
    cout << "===================================\n";
    for (int i = 0; i < phoneBook.size(); i++)
    {
        if (num == i + 1) {
            if (typeid(*phoneBook[i]) == typeid(contact))
            {
                int number;
                cout << "New number: ";
                cin >> number;
                phoneBook[i]->setNumber(number);
            }
            else if (typeid(*phoneBook[i]) == typeid(person))
            {
                person* p = dynamic_cast<person*>(phoneBook[i]);
                if (p != nullptr)
                {
                    string surname;
                    cout << "New surname: ";
                    cin >> surname;
                    p->setSurname(surname);
                    string address;
                    cout << "New address: ";
                    cin >> address;
                    p->setAddress(address);
                    int number;
                    cout << "New number: ";
                    cin >> number;
                    p->setNumber(number);
                }

            }
            else if (typeid(*phoneBook[i]) == typeid(Friend))
            {
                Friend* p = dynamic_cast<Friend*>(phoneBook[i]);
                if (p != nullptr)
                {
                    string surname;
                    cout << "New surname: ";
                    cin >> surname;
                    p->setSurname(surname);
                    string address;
                    cout << "New address: ";
                    cin >> address;
                    p->setAddress(address);
                    int number;
                    cout << "New number: ";
                    cin >> number;
                    p->setNumber(number);
                    Date date_of_birth;
                    cout << "Date of birth: ";
                    cin >> date_of_birth;
                }

            }
            else if (typeid(*phoneBook[i]) == typeid(colleague))
            {
                colleague* p = dynamic_cast<colleague*>(phoneBook[i]);
                if (p != nullptr)
                {
                    string organization;
                    cout << "New organization: ";
                    cin >> organization;
                    p->setOrganization(organization);
                    string address;
                    cout << "New address: ";
                    cin >> address;
                    p->setAddress(address);
                    int number;
                    cout << "New number: ";
                    cin >> number;
                    p->setNumber(number);
                    bool fax;
                    cout << "New fax: ";
                    cin >> fax;
                    p->setFax(fax);
                    string person;
                    cout << "New person: ";
                    cin >> person;
                    p->setPerson(person);
                }

            }
        }
    }
    cout << "===================================\n";
}

void phone_book::mySort()
{
    sort(phoneBook.begin(), phoneBook.end(), [](contact* a, contact* b) {
        return a->getNumber() > b->getNumber();
    });
}

void phone_book::showInfo() const
{
    for (int i = 0; i < phoneBook.size(); i++)
    {
        cout << "Num: " << i + 1 << endl;
        phoneBook[i]->showInfo();
        cout << "\n-----------------------------\n";
    }
}
