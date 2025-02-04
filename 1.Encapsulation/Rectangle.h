#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(float width, float height)
        : width(width), height(height)
    {

    }
    ~Rectangle() = default;

    Rectangle& operator=(const Rectangle& other)
    {
        this->width = other.width;
        this->height = other.height;
    }

    virtual float GetArea() override
    {
        return width * height;
    }

    virtual float GetSize() override
    {
        return 2 * width + 2 * height;
    }

private:
    float width = 0;
    float height = 0;
};