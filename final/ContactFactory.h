#pragma once
#include <memory>
#include <string>
#include "Contact.h"

enum class ContactType {
    Personal,
    Business
};

class ContactFactory {
public:
    static std::shared_ptr<Contact> createContact(ContactType type, const std::string& name,
        const std::string& phoneNumber,
        const std::string& additionalInfo);
};