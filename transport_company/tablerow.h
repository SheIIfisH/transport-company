#ifndef TABLEROW_H
#define TABLEROW_H

#include <stdint.h>

class TableRow
{
private:
    uint16_t m_id;
public:
    TableRow(const uint16_t p_index): m_id{p_index}{}
    virtual uint8_t show() = 0;
    uint16_t getId(){return m_id;}
    void setId(uint16_t p_index){m_id = p_index;}
};

#endif // TABLEROW_H
