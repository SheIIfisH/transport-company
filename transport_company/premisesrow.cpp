#include "premisesrow.h"
#include "global.h"
#include <iostream>

PremisesRow::PremisesRow(std::string p_name, std::string p_address, std::string p_type)
{
    m_name=p_name;
    m_address=p_address;
    m_type=p_type;
}

uint8_t PremisesRow::show()
{
    std::cout << "|";
    PrintCell(std::to_string(getId()), 6);
    std::cout << "|";
    PrintCell(m_name, 20);
    std::cout << "|";
    PrintCell(m_address, 20);
    std::cout << "|";
    PrintCell(m_type, 20);
    std::cout << "|\n";
    return 0;
}

uint8_t PremisesRow::edit(TableRow *p_row)
{
    PremisesRow *pointPremisesRow = (PremisesRow *)p_row;

    m_name = pointPremisesRow->getName();
    m_address = pointPremisesRow->getAddress();
    m_type = pointPremisesRow->getType();
    return 0;
}

std::string PremisesRow::getName()
{
    return m_name;
}

void PremisesRow::setName(std::string p_name)
{
    m_name=p_name;
}

std::string PremisesRow::getAddress()
{
    return m_address;
}

void PremisesRow::setAddress(std::string p_address)
{
    m_address=p_address;
}

std::string PremisesRow::getType()
{
    return m_type;
}

void PremisesRow::setType(std::string p_type)
{
   m_type=p_type;
}
