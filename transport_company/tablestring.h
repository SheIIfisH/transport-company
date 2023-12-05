#ifndef TABLESTRING_H
#define TABLESTRING_H

#include <stdint.h>

class TableString
{
public:
    TableString(){}
    TableString(const TableString& p_table) {}
    virtual uint8_t input() = 0;
    virtual uint8_t show() = 0;
};

#endif // TABLESTRING_H
