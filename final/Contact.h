#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <fstream>

class Contact {
public:
    Contact(const std::string& name, const std::string& phoneNumber);
    virtual ~Contact() = default;

    virtual void display() const = 0;
    virtual void save(std::ofstream& outFile) const = 0;
    virtual void load(std::ifstream& inFile) = 0;

    std::string getName() const;
    std::string getPhoneNumber() const;

protected:
    std::string name;
    std::string phoneNumber;
};

#endif
