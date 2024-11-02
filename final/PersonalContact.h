#ifndef PERSONAL_CONTACT_H
#define PERSONAL_CONTACT_H

#include "Contact.h"
#include <string>

class PersonalContact : public Contact {
public:
    PersonalContact(const std::string& name, const std::string& phoneNumber, const std::string& birthday);

    void display() const override;
    void save(std::ofstream& outFile) const override;
    void load(std::ifstream& inFile) override;

    std::string getBirthday() const;

private:
    std::string birthday;
};

#endif
