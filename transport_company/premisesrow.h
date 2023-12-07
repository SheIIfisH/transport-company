#ifndef PREMISESROW_H
#define PREMISESROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"

class PremisesRow : public TableRow
{
private:
    std::string name, address, type;
public:
    PremisesRow(uint16_t id, std::string name, std::string address, std::string type);
    virtual uint8_t show();
    virtual uint8_t edit(TableRow * p_row);
    std::string getName();
    void setName(std::string name);
    std::string getAddress();
    void setAddress(std::string address);
    std::string getType();
    void setType(std::string type);
};

#endif // PREMISESROW_H
