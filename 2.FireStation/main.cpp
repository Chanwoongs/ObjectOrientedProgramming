#include <iostream>

#include "FirefighterBase.h"
#include "Firefighter.h"
#include "FireChief.h"
#include "TraineeFirefighter.h"
#include "FireStation.h"
#include "Administrator.h"

int main()
{
    // 소방서 생성.
    FireStation* fireStation = new FireStation();

    // 관리자 생성.
    Administrator* mareska = new Administrator("Manager", "Enzo", "Mareska");

    Firetruck* truckOne = new Firetruck();
    Firefighter* jackson = new Firefighter("jackson");
    Firefighter* palmer = new Firefighter("palmer");

    // 수습 소방관 생성 및 테스트.
    Firefighter* neto = new TraineeFighetfighter("neto");
    neto->ExtinguishFire();

    // 소방서장.
    FireChief* james = new FireChief("james", jackson);
    truckOne->SetDriver(james);
    james->Drive(truckOne, Point(200, 300));

    // 출근.
    fireStation->ClockIn(mareska);
    fireStation->ClockIn(jackson);
    fireStation->ClockIn(palmer);
    fireStation->ClockIn(neto);
    fireStation->ClockIn(james);

    // 이름 확인.
    fireStation->RollCall();

    // 불 끄기 위임.
    //james->TellFirefighterToExtinguishFire(jackson);
    james->ExtinguishFire();

    // 다형성.
    FirefighterBase* stillJames = james; // 복사 생성자 호출.
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

    delete truckOne;
    delete jackson;
    delete palmer;
    delete neto;
    delete james;

    delete fireStation;
    delete mareska;

};