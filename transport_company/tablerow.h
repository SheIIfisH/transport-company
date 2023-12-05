#ifndef TABLEROW_H
#define TABLEROW_H

#include <stdint.h>

class TableRow
{
public:
    TableRow(){}
    TableRow(const TableRow* p_table) {}
    virtual uint8_t input() = 0;
    virtual uint8_t show() = 0;
};

#endif // TABLEROW_H
