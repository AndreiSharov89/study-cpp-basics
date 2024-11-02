#ifndef BUSINESS_CONTACT_H
#define BUSINESS_CONTACT_H

#include "Contact.h"
#include <string>

class BusinessContact : public Contact {
public:
    BusinessContact(const std::string& name, const std::string& phoneNumber, const std::string& company);

    void display() const override;
    void save(std::ofstream& outFile) const override;
    void load(std::ifstream& inFile) override;

    std::string getCompany() const;

private:
    std::string company;
};

#endif
