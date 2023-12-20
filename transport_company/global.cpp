#include "global.h"
#include <iostream>
#include <limits>

void PrintCell(std::string const &p_string, uint8_t p_columnWidth)
{
    std::string currentLine = p_string.substr(0, p_columnWidth);
    int8_t difference = p_columnWidth - currentLine.length();

    std::cout << currentLine;
    if (difference > 0)
    {
        for(int8_t i = 0; i < difference; ++i)
        {
            std::cout << " ";
        }
    }
}


char GetChar()
{
    std::cin.clear();
    char res = std::cin.get();
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return res;
}


std::string GetString()
{
    std::cin.clear();
    std::string res;
    std::getline(std::cin, res);
    std::cin.clear();
    return res;
}
