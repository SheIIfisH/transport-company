#ifndef PREMISESROW_H
#define PREMISESROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"

/*
 * PremisesRow - это класс, описывающий строку таблицы помещений,
 * строка хранит данные о помещениях(название, адрес, тип)
 * класс наследуется от абстрактоного TableRow и реализует его
 * виртуальные методы show() и edit(TableRow * p_row).
 */

class PremisesRow : public TableRow
{
private:
    std::string m_name, m_address, m_type;
public:
    PremisesRow(std::string p_name, std::string p_address, std::string p_type);
    virtual uint8_t show();
    virtual uint8_t edit(TableRow * p_row);
    std::string getName();
    void setName(std::string p_name);
    std::string getAddress();
    void setAddress(std::string p_address);
    std::string getType();
    void setType(std::string p_type);
};

#endif // PREMISESROW_H
