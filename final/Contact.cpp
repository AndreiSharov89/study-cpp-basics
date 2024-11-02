#include "Contact.h"

Contact::Contact(const std::string& name, const std::string& phoneNumber)
    : name(name), phoneNumber(phoneNumber) {}

std::string Contact::getName() const {
    return name;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}
