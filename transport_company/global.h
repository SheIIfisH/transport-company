#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdint.h>
#include <string>
#include <iostream>
#include <limits>

//функция печатает строку p_string, как элемент столбца шириной columnWidth;
//если длина строки больше ширины столбца, печатаются только первые columnWidth символов строки;
//если строка меньше ширины столбца, на незанятых символами строки местах печатаются пробелы.

void PrintCell(std::string const &p_string, uint8_t p_columnWidth);
char GetChar();
std::string GetString();
template<typename Type> bool GetInteger(Type& p_num)
{
    std::cin.clear();
    bool check = (std::cin >> p_num);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return check;
}

#endif // GLOBAL_H

