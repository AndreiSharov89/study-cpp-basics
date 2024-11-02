#include "PersonalContact.h"
#include <iostream>

PersonalContact::PersonalContact(const std::string& name, const std::string& phoneNumber, const std::string& birthday)
    : Contact(name, phoneNumber), birthday(birthday) {}

void PersonalContact::display() const {
    std::cout << "Личный контакт: " << name << ", Телефон: " << phoneNumber << ", День рождения: " << birthday << "\n";
}

void PersonalContact::save(std::ofstream& outFile) const {
    outFile << "Личный," << name << "," << phoneNumber << "," << birthday << "\n";
}

void PersonalContact::load(std::ifstream& inFile) {
    std::getline(inFile, name, ',');
    std::getline(inFile, phoneNumber, ',');
    std::getline(inFile, birthday);
}

std::string PersonalContact::getBirthday() const {
    return birthday;
}
