﻿#pragma once

#include <iostream>
#include <vector>

#include "INamedPerson.h"
#include "FirefighterBase.h"

class FireStation
{
public:
    // 출근 함수.
    void ClockIn(INamedPerson* staffMember)
    {
        // 이미 출근했는지 확인.
        bool contains = false;

        for (INamedPerson* staff : clockedInStaff)
        {
            if (staff == staffMember)
            {
                contains = true;
                break;
            }
        }

        // 출근 안했을 때 배열에 추가.
        if (!contains)
        {
            clockedInStaff.emplace_back(staffMember);
        }
    }

    // 출석 확인 함수.
    void RollCall()
    {
        for (INamedPerson* staff : clockedInStaff)
        {
            std::cout << staff->GetName() << '\n';
        }
    }

private:
    // 직원 관리 변수.
    std::vector<INamedPerson*> clockedInStaff;
};