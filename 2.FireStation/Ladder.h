#pragma once

class Ladder
{
public:
    Ladder(float length = 0.0f)
        : length(length)
    {

    }
    ~Ladder() = default;

    // Getter/Setter
    float GetLength() const { return length; }
    void SetLength(float Length) { this->length = length; }

private:
    float length = 0.0f;
};