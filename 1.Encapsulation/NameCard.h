#pragma once

#include <iostream>
#include <string>

class NameCard
{
public:
    NameCard(const std::string& name, const std::string& phoneNumber,
        const std::string& address, const std::string& level)
        : name(name), phoneNumber(phoneNumber), address(address), level(level)
    {

    }
    ~NameCard() = default;

    NameCard& operator=(const NameCard& other)
    {
        this->name = other.name;
        this->phoneNumber = other.phoneNumber;
        this->address = other.address;
        this->level = other.level;
    }

    void ShowData() const
    {
        std::cout << "이    름: " << name << '\n';
        std::cout << "전화번호: " << phoneNumber << '\n';
        std::cout << "주    소: " << address << '\n';
        std::cout << "직    급: " << level << '\n';
    }

private:
    std::string name;
    std::string phoneNumber;
    std::string address;
    std::string level;
};
