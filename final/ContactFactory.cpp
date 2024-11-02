#include "ContactFactory.h"
#include "PersonalContact.h"
#include "BusinessContact.h"
#include <memory>

std::shared_ptr<Contact> ContactFactory::createContact(ContactType type, const std::string& name,
    const std::string& phoneNumber,
    const std::string& additionalInfo) {
    switch (type) {
    case ContactType::Personal:
        return std::make_shared<PersonalContact>(name, phoneNumber, additionalInfo); // День рождения
    case ContactType::Business:
        return std::make_shared<BusinessContact>(name, phoneNumber, additionalInfo); // Название компании
    default:
        return nullptr;
    }
}
