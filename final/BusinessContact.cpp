#include "BusinessContact.h"
#include <iostream>

BusinessContact::BusinessContact(const std::string& name, const std::string& phoneNumber, const std::string& company)
    : Contact(name, phoneNumber), company(company) {}

void BusinessContact::display() const {
    std::cout << "Рабочий контакт: " << name << ", Телефон: " << phoneNumber << ", Компания: " << company << "\n";
}

void BusinessContact::save(std::ofstream& outFile) const {
    outFile << "Рабочий," << name << "," << phoneNumber << "," << company << "\n";
}

void BusinessContact::load(std::ifstream& inFile) {
    std::getline(inFile, name, ',');
    std::getline(inFile, phoneNumber, ',');
    std::getline(inFile, company);
}

std::string BusinessContact::getCompany() const {
    return company;
}
