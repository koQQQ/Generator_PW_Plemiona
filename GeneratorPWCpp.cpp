#include "GeneratorPWHeaders.hpp"

void Writes::load(const std::string& Data)
{
    if(!CheckingCorrectCoords(Data))
        return;
    Vector_for_Coords.push_back(Data);
}   

bool Writes::CheckingCorrectCoords(const std::string& LineWithCoords)
{
    if(LineWithCoords == "")
        return false;
    if(LineWithCoords.length() < 7)
        return false;
    return true;
}

std::vector<std::string> Writes::returnWrites()
{
    return Vector_for_Coords;
}