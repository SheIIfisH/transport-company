#ifndef EMPLOVEEROW_H
#define EMPLOVEEROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"

class EmployeeRow : public TableRow
{
private:
    std::string m_fio, m_position, m_workplace;
public:
    EmployeeRow(uint16_t p_id, std::string p_fio, std::string p_position, std::string p_workplace);
    virtual uint8_t show();
    virtual uint8_t edit(TableRow * p_row);
    std::string getFio();
    void setFio(std::string p_fio);
    std::string getPosition();
    void setPosition(std::string p_position);
    std::string getWorkplace();
    void setWorkplace(std::string p_workplace);
};

#endif // EMPLOVEEROW_H
