#pragma once

#include <iostream>
#include "PhoneBook.h"

class Interface {
public:
    void run();
    void seed();

private:
    void displayMenu() const;
    void addPersonalContact();
    void addBusinessContact();
    void saveContacts() const;
    void loadContacts();
};
