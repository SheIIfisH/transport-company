#ifndef TABLE_H
#define TABLE_H

#include <stdint.h>
#include <list>
#include "tablerow.h"

class Table
{
private:
    std::list<TableRow*> m_content;
public:
    Table(){}
    uint8_t newRow(TableRow* p_row);
    TableRow* getRow(const uint16_t p_index);
    uint8_t editRow(const uint16_t p_index, TableRow* p_row);
    uint8_t deleteRow(const uint16_t p_index);
};

#endif // TABLE_H
