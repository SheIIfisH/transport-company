#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdint.h>
#include <string>

//функция печатает строку p_string, как элемент столбца шириной columnWidth;
//если длина строки больше ширины столбца, печатаются только первые columnWidth символов строки;
//если строка меньше ширины столбца, на незанятых символами строки местах печатаются пробелы.

void PrintCell(std::string const &p_string, uint8_t p_columnWidth);

#endif // GLOBAL_H

