#include "premisesrow.h"

PremisesRow::PremisesRow(uint16_t p_id, std::string p_name, std::string p_address, std::string p_type):TableRow(p_id)
{

}

uint8_t PremisesRow::show()
{
    return 0;
}

uint8_t PremisesRow::edit(TableRow *p_row)
{
    return 0;
}

std::string PremisesRow::getName()
{
    return "";
}

void PremisesRow::setName(std::string p_name)
{

}

std::string PremisesRow::getAddress()
{
    return "";
}

void PremisesRow::setAddress(std::string p_address)
{

}

std::string PremisesRow::getType()
{
    return "";
}

void PremisesRow::setType(std::string p_type)
{

}
