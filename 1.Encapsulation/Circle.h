#pragma once

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(float radius)
        : radius(radius)
    {

    }
    ~Circle() = default;

    Circle& operator=(const Circle& other)
    {
        this->radius = other.radius;
    }

    virtual float GetArea() override
    {
        return radius * radius * 3.14f;
    }

    virtual float GetSize() override
    {
        return 2 * radius * 3.14f;
    }

private:
    float radius;
};