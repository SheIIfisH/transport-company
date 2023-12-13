#include "table.h"
#include <cstdlib>

uint8_t Table::showRows()
{
    for (std::list<TableRow*>::iterator it = m_content.begin(), end = m_content.end(); it != end; ++it)
        {
        (*it)->show();
        }
    return 0;
}

uint8_t Table::newRow(TableRow *p_row)
{
    m_content.push_back(p_row);
    return 0;
}

TableRow *Table::getRow(const uint16_t p_id)
{
    std::list<TableRow*>::iterator it = m_content.begin(), end = m_content.end();
    while((*it)->getId() != p_id)
        {
        if (it == end)
            {
            return NULL;
            }
        else
            {
            ++it;
            }
        }
    return *it;
}

uint8_t Table::editRow(const uint16_t p_id, TableRow *p_row)
{
    TableRow *lineToChange = getRow(p_id);
    if (lineToChange != NULL)
        {
        lineToChange->edit(p_row);
        return 0;
        }
     else
        {
        return 1;
        }
}

uint8_t Table::deleteRow(const uint16_t p_id)
{
    std::list<TableRow*>::iterator it = m_content.begin(), end = m_content.end();

    while((*it)->getId() != p_id)
        {
        if (it == end)
            {
            return 1;
            }
        else
            {
            ++it;
            }
        }
    m_content.erase(it);
    return 0;
}
