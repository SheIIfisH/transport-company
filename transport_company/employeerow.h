#ifndef EMPLOVEEROW_H
#define EMPLOVEEROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"

class EmploveeRow : public TableRow
{
private:
    std::string fio, position, workplace;
public:
    PremisesRow(uint16_t id, std::string fio, std::string position, std::string workplace);
    virtual uint8_t show();
    virtual uint8_t edit(TableRow * p_row);
    std::string getFio();
    void setFio(std::string fio);
    std::string getPosition();
    void setPosition(std::string position);
    std::string getWorkplace();
    void setWorkplace(std::string workplace);
};

#endif // EMPLOVEEROW_H
