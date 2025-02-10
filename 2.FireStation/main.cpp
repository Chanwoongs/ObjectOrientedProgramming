#include <iostream>

#include "Firefighter.h"
#include "FireChief.h"

int main()
{
    Firetruck* truckOne = new Firetruck();
    Firefighter* jackson = new Firefighter("jackson");
    Firefighter* palmer = new Firefighter("palmer");

    // 소방서장.
    FireChief* james = new FireChief("james", jackson);
    truckOne->SetDriver(james);
    james->Drive(truckOne, Point(200, 300));

    // 불 끄기 위임.
    //james->TellFirefighterToExtinguishFire(jackson);
    james->ExtinguishFire();

    // 다형성.
    Firefighter* stillJames = james; // 복사 생성자 호출.
    stillJames->ExtinguishFire();
    
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