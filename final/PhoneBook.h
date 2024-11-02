#pragma once

#include "Contact.h"
#include <vector>
#include <memory>
#include <string>

class PhoneBook {
public:
    static PhoneBook& getInstance();

    void addContact(std::shared_ptr<Contact> contact);
    void displayContacts() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);

private:
    PhoneBook() = default;
    std::vector<std::shared_ptr<Contact>> contacts;
};


