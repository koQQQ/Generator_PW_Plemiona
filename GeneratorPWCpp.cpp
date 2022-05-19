#include "GeneratorPWHeaders.hpp"

void Writes::load(std::string Data)
{
    Vector_for_Coords.push_back(Data);
}   

std::vector<std::string> Writes::returnWrites()
{
    return Vector_for_Coords;
}