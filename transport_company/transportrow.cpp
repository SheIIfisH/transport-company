#include "transportrow.h"
#include "global.h"
#include <iostream>

// конструктор
TransportRow::TransportRow(uint16_t p_number,
                           std::string p_driver,
                           uint32_t p_payload,
                           TechStatus_t p_TechCond)
{
    m_number = p_number;
    m_driver = p_driver;
    m_payload = p_payload;
    m_TechCond = p_TechCond;
}

uint8_t TransportRow::show()
{
    std::cout << "|";
    PrintCell(std::to_string(getId()), 6);
    std::cout << "|";
    PrintCell(std::to_string(m_number), 6);
    std::cout << "|";
    PrintCell(m_driver, 37);
    std::cout << "|";
    PrintCell(std::to_string(m_payload), 7);
    std::cout << "|";
    switch (m_TechCond)
    {
    case operable:
    {
        PrintCell("operable", 20);
        break;
    }
    case mtrequired:
    {
        PrintCell("maintenance required", 20);
        break;
    }
    case rprequired:
    {
        PrintCell("repair required", 20);
        break;
    }
    case rpneed:
    {
        PrintCell("repair need", 20);
        break;
    }

    }
    std::cout << "|\n";
    return 0;
}

uint8_t TransportRow::edit(TableRow *p_row)
{
    TransportRow *pointTransportRow = (TransportRow *)p_row;

    m_number = pointTransportRow->getNumber() ;
    m_driver = pointTransportRow->getDriver() ;
    m_payload = pointTransportRow->getPayload() ;
    m_TechCond = pointTransportRow->getTechCond();
    return 0;
}

void TransportRow::setNumber(uint16_t p_number)
{
    m_number = p_number;
}
uint16_t TransportRow::getNumber()
{
    return m_number;
}
void TransportRow::setDriver(std::string p_driver)
{
    m_driver = p_driver;
}
std::string TransportRow::getDriver()
{
    return m_driver;
}
void TransportRow::setPayload(uint32_t p_payload)
{
    m_payload = p_payload;
}
uint32_t TransportRow::getPayload()
{
    return m_payload;
}
void TransportRow::setTechCond(TechStatus_t p_TechCond)
{
    m_TechCond = p_TechCond;
}
TechStatus_t TransportRow::getTechCond()
{
    return m_TechCond;
}
