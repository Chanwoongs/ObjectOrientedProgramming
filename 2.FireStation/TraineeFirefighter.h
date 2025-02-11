﻿#pragma once

#include "Firefighter.h"

class TraineeFighetfighter : public Firefighter
{
public:
    TraineeFighetfighter(const std::string& name, bool hoseTrainedOnFire = false)
        : Firefighter(name), hoseTrainedOnFire(hoseTrainedOnFire)
    {

    }
    ~TraineeFighetfighter() = default;

protected:
    // 호스 켜기.
    virtual void TurnOnHose() override
    {
        if (hoseTrainedOnFire)
        {
            std::cout << "불이 꺼지고 있습니다.\n";
        }
        else
        {
            std::cout << "물이 엉뚱한 곳으로 튀고 있습니다.\n";
        }
    }

    // 호스 조준.
    virtual void TrainHoseOnFire() override
    {
        hoseTrainedOnFire = true;
        std::cout << "호스를 불이 발생한 곳에 겨냥하고 있습니다.\n";
    }

private:
    // 호스가 불에 정확하게 조준되는지 여부를 결정.
    bool hoseTrainedOnFire = false;
};