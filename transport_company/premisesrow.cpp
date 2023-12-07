#include "premisesrow.h"

PremisesRow::PremisesRow(uint16_t id, std::string name, std::string address, std::string type):TableRow(id)
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

void PremisesRow::setName(std::string name)
{

}

std::string PremisesRow::getAddress()
{
    return "";
}

void PremisesRow::setAddress(std::string address)
{

}

std::string PremisesRow::getType()
{
    return "";
}

void PremisesRow::setType(std::string type)
{

}
