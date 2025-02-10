#pragma once

#include "Firefighter.h"

class FireChief : public Firefighter
{
public:
    FireChief(const std::string& name)
        : Firefighter(name)
    {

    }
    ~FireChief() = default;

    // 불 끄기 위임 함수
    void TellFirefighterToExtinguishFire(Firefighter* colleague)
    {
        colleague->ExtinguishFire();
    }

};