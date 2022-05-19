#pragma once
#include <iostream>
#include <vector>

class Writes
{
public:
    void load(std::string Data);
    std::vector<std::string> returnWrites();
private:
    std::vector<std::string> Vector_for_Coords;
};