#include <iostream>
#include <clocale>
#include <cstdlib>
#include <Windows.h>
#include <cstdio>
#include <cstring>
#include <string>
#include "Date.h"
#include "contact.h"
#include "person.h"
#include "Friend.h"
#include "colleague.h"
#include <vector>
#include <algorithm>
#include "phone_book.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    phone_book a;

    a.myPush_back(969462851);
    a.myPush_back("Merrick", "123 Maple Street", 951853261);
    a.myPush_back("Harrington", "789 Elm Road", 951676067, Date(2007, 7, 4));
    a.myPush_back("Brightwave Solutions Ltd", "582 Willow Lane", 960972054, 0, "Oliver");

    a.showInfo();

    a.myErase(1);

    a.showInfo();

    a.mySort();

    a.showInfo();

    a.myEdit(1);

    a.showInfo();

    /*vector<contact*>Phone_book;{
        new person("Merrick","123 Maple Street",951853261),
        new person("Hawkins","456 Oak Avenue",962713982),

        new contact(969462851),
        new contact(950741932),

        new Friend("Harrington","789 Elm Road",951676067,Date(2007,7,4)),
        new Friend("Whitman","321 Pine Street",967067258,Date(2010,6,11)),

        new colleague("Brightwave Solutions Ltd","582 Willow Lane",960972054,0,"Oliver"),
        new colleague("GlobalTech Innovations Inc","908 Crescent Boulevard",954384697,1,"Sophia")
    }; */

    /*phoneBook.myPush_back("Merrick", "123 Maple Street", 951853261);
    phoneBook.myPush_back("Harrington", "789 Elm Road", 951676067, Date(2007, 7, 4));
    phoneBook.myPush_back("Brightwave Solutions Ltd", "582 Willow Lane", 960972054, 0, "Oliver");*/
    
    /*sort(phone_book.begin(), phone_book.end(), [](contact* a, contact* b) {
        return a->getNumber() > b->getNumber();
        });*/



    return 0;
}