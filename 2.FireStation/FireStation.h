#pragma once

#include <vector>

class FireStation
{
public:
    // 출근 함수.
    void ClockIn(void* staffMember)
    {
        // 이미 출근했는지 확인.
        bool contains = false;

        for (void* staff : clockedInStaff)
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
        for (void* staff : clockedInStaff)
        {
            // std::cout << staff->???
        }
    }

private:
    // 직원 관리 변수.
    std::vector<void*> clockedInStaff;
};