#pragma once

#include <iostream>
#include <string>

#include "Firetruck.h"

class FirefighterBase
{
public:
    FirefighterBase(const std::string& name)
        : name(name)
    {

    }

    // 불 끄기. 
    virtual void ExtinguishFire() = 0; // 순수 가상 함수.
        
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

protected:
    std::string name;
};