#include "Interface.h"
#include "ContactFactory.h"
#include <iostream>

void Interface::seed() {
    PhoneBook::getInstance().loadFromFile("contacts.txt");
    std::cout << "�������� ��������� �� ����� contacts.txt.\n";
}

void Interface::run() {
    bool running = true;
    while (running) {
        displayMenu();

        int choice;
        std::cout << "�������� ����� ������: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addPersonalContact();
            break;
        case 2:
            addBusinessContact();
            break;
        case 3:
            PhoneBook::getInstance().displayContacts();
            break;
        case 4:
            saveContacts();
            break;
        case 5:
            loadContacts();
            break;
        case 6:
            running = false;
            break;
        default:
            std::cout << "�������� ����. ��������� �������\n";
        }
    }
}

void Interface::displayMenu() const {
    std::cout << "\n--- ��������� ����� ---\n";
    std::cout << "1. �������� ������ �������\n";
    std::cout << "2. �������� ������� �������t\n";
    std::cout << "3. ���������� ���������� �����\n";
    std::cout << "4. ��������� � ����\n";
    std::cout << "5. ��������� �� ����� (contacts.txt)\n";
    std::cout << "0. �����\n";
}

void Interface::addPersonalContact() {
    std::string name, phoneNumber, birthday;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter phone number: ";
    std::cin >> phoneNumber;
    std::cout << "Enter birthday (DD-MM-YYYY): ";
    std::cin >> birthday;

    auto contact = ContactFactory::createContact(ContactType::Personal, name, phoneNumber, birthday);
    PhoneBook::getInstance().addContact(contact);
    std::cout << "Personal contact added.\n";
}

void Interface::addBusinessContact() {
    std::string name, phoneNumber, company;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter phone number: ";
    std::cin >> phoneNumber;
    std::cout << "Enter company: ";
    std::cin >> company;

    auto contact = ContactFactory::createContact(ContactType::Business, name, phoneNumber, company);
    PhoneBook::getInstance().addContact(contact);
    std::cout << "Business contact added.\n";
}

void Interface::saveContacts() const {
    std::string filename;
    std::cout << "������� ��� ����� ��� ���������� ���������: ";
    std::cin >> filename;

    PhoneBook::getInstance().saveToFile(filename);
    std::cout << "�������� ��������� � ���� " << filename << ".\n";
}

void Interface::loadContacts() {
    std::string filename;
    std::cout << "������� ��� ����� ��� ������� ���������: ";
    std::cin >> filename;

    PhoneBook::getInstance().loadFromFile(filename);
    std::cout << "�������� ��������� �� ����� " << filename << ".\n";
}
