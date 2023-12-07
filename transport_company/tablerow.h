#ifndef TABLEROW_H
#define TABLEROW_H

#include <stdint.h>

/*
 * TableRow - абстрактный класс, описывающий строку таблицы
 *
 * Является базовым для всех объектов, которые могут храниться в таблице.
 * Содержит идентификатор, который отображает его номер в таблице,
 * функции для изменения и получения значения этого идентификатора и
 * заголовок функции отображения строки.
 */

class TableRow
{
private:
    uint16_t m_id;
public:
    TableRow(const uint16_t p_index): m_id{p_index}{}
    virtual uint8_t show() = 0;
    virtual uint8_t edit(TableRow * p_row) = 0;
    uint16_t getId(){return m_id;}
    void setId(uint16_t p_index){m_id = p_index;}
    virtual ~TableRow() = default;
};

#endif // TABLEROW_H
