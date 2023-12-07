#ifndef PREMISESROW_H
#define PREMISESROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"

class PremisesRow : public TableRow
{
private:
    std::string m_name, m_address, m_type;
public:
    PremisesRow(uint16_t p_id, std::string p_name, std::string p_address, std::string p_type);
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
