#pragma once

#include <string>

class Administrator
{
public:
    Administrator(const std::string& title, const std::string& firstName, const std::string& lastName)
        : title(title), firstName(firstName), lastName(lastName)
    {

    }

    // Getter.
    std::string GetTitle() const{ return title; }
    std::string GetFirstName() const{ return firstName; }
    std::string GetLastName() const { return lastName; }

    std::string GetName() const { return title + " " + lastName + " " + firstName; }

private:
    std::string title;
    std::string firstName;
    std::string lastName;
};