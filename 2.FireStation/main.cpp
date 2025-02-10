#include <iostream>

#include "Firefighter.h"

int main()
{
    Firetruck* truckOne = new Firetruck();
    Firefighter* jackson = new Firefighter("jackson");
    Firefighter* palmer = new Firefighter("palmer");
    
    // 운전자 설정.
    truckOne->SetDriver(jackson);

    // 소방차 이동.
    jackson->Drive(truckOne, Point(10, 5));

    // 운전자 설정.
    truckOne->SetDriver(palmer);

    // 소방차 이동.
    jackson->Drive(truckOne, Point(200, 111));

    // 소방차 이동.
    palmer->Drive(truckOne, Point(200, 111));
};