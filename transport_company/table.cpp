#include "table.h"
//#include <cstdlib>

uint16_t Table::getRowCount()
{
    return m_rowCount;
}

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
    m_rowCount++;
    p_row->setId(m_rowCount);
    m_content.push_back(p_row);
    return 0;
}

TableRow *Table::getRow(const uint16_t p_id)
{
    if(p_id > m_rowCount || p_id < 1) return nullptr;

    std::list<TableRow*>::iterator it = m_content.begin();
    for(uint16_t i = 1; i < p_id; ++i) ++it;

    return *it;
}

uint8_t Table::editRow(const uint16_t p_id, TableRow *p_row)
{
    TableRow *lineToChange = getRow(p_id);
    if (lineToChange)
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
    if(p_id > m_rowCount || p_id < 1) return 1;

    std::list<TableRow*>::iterator it = m_content.begin();
    for(uint16_t i = 1; i < p_id; ++i) ++it;

    delete *it;
    it = m_content.erase(it);
    m_rowCount--;

    while(it != m_content.end())
    {
        (*it)->decreaseId();
        ++it;
    }

    return 0;
}
