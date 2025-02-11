#pragma once

#include <iostream>

#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

// 전방 선언(Forward Declaration). 쓰는 이유: 헤더 순환 참조 방지, 컴파일 속도 개선.
// 전방 선언은 포인터, 레퍼런스에만 가능하다. 이유: 포인터는 주소의 크기를 몰라도 가능하기 때문에 가능하다. 타입에 상관없다.
class FirefighterBase;

class Firetruck
{
public:
    Firetruck()
    {
        ladder = new Ladder(10.0f);
    }
    ~Firetruck()
    {
        delete ladder;
    }

    void Drive(const Point& position)
    {
        if (driver == nullptr)
        {
            return;
        }

        std::cout << position << " 위치로 소방차 이동 중\n";
    }
    
    const Ladder* GetLadder() const { return ladder; }
    const Hose* GetHose() const { return hose; }
    void SetHode(Hose* hose) { this->hose = hose; }
    
    FirefighterBase* GetDriver() const { return driver; }
    void SetDriver(FirefighterBase* driver) { this->driver = driver; }

private:
    FirefighterBase* driver = nullptr;
    Ladder* ladder = nullptr;
    Hose* hose = nullptr;
};