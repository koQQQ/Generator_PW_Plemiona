#pragma once
#include <iostream>
#include <vector>

class Writes
{
public:
    void load(const std::string& Data);
    std::vector<std::string> returnWrites();
private:
    bool CheckingCorrectCoords(const std::string& LineWithCoords);
    std::vector<std::string> Vector_for_Coords;
};