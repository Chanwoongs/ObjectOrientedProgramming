#pragma once

class Hose
{
public:
    Hose(float length = 0.0f)
        : length(length)
    {

    }
    ~Hose() = default;

    // Getter/Setter
    float GetLength() const { return length; }
    void SetLength(float Length) { this->length = length; }

private:
    float length = 0.0f;
};