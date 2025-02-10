#pragma once

#include <iostream>
#include <string>

#include "Firetruck.h"

class Firefighter
{
public:
    Firefighter(const std::string& name)
        : name(name)
    {

    }
    ~Firefighter() = default;

    // 불 끄기.
    void ExtinguishFire()
    {
        std::cout << name << " 소방관이 불을 끄고 있음!\n";
    }

    // 운전.
    void Drive(Firetruck* truckToDrive, const class Point& position)
    {
        // 운전자 확인.
        if (truckToDrive->GetDriver() != this)
        {
            return;
        }

        truckToDrive->Drive(position);
    }

    // Getter/Setter.
    const std::string GetName() const { return name; }
    void SetName(const std::string& name) { this->name = name; }

private:
    std::string name;
};