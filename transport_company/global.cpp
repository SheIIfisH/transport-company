#include "global.h"
#include <iostream>

void tabulation(std::string const &p_string, uint8_t p_columnWidth)
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
