#include "PhoneBook.h"
#include "PersonalContact.h"
#include "BusinessContact.h"
#include <fstream>
#include <iostream>

PhoneBook& PhoneBook::getInstance() {
    static PhoneBook instance;
    return instance;
}

void PhoneBook::addContact(std::shared_ptr<Contact> contact) {
    contacts.push_back(contact);
}

void PhoneBook::displayContacts() const {
    std::cout << "\n--- ���������� ����� ---\n";
    for (const auto& contact : contacts) {
        contact->display();
    }
}

void PhoneBook::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "������ �������� ����� ��� ������.\n";
        return;
    }

    for (const auto& contact : contacts) {
        contact->save(outFile);
    }
    outFile.close();
}

void PhoneBook::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "������ �������� ����� ��� ������.\n";
        return;
    }

    contacts.clear();
    std::string type;
    while (std::getline(inFile, type, ',')) {
        std::shared_ptr<Contact> contact;

        if (type == "������") {
            contact = std::make_shared<PersonalContact>("", "", "");
        }
        else if (type == "�������") {
            contact = std::make_shared<BusinessContact>("", "", "");
        }

        if (contact) {
            contact->load(inFile);
            contacts.push_back(contact);
        }
    }
    inFile.close();
}
