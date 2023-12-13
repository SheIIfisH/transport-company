#include "transportrow.h"
#include "global.h"
#include <iostream>

// конструктор
TransportRow::TransportRow(uint16_t p_index,
                           uint16_t p_id,
                           std::string p_driver,
                           uint32_t p_payload,
                           TechStatus_t p_TechCond):TableRow(p_index)
{
    m_number = p_id;
    m_driver = p_driver;
    m_payload = p_payload;
    m_TechCond = p_TechCond;
}

uint8_t TransportRow::show()
    {
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
            PrintCell("operable", 12);
            break;
        }
        case mtrequired:
        {
            PrintCell("mtrequired", 12);
            break;
        }
        case rprequired:
        {
            PrintCell("rprequired", 12);
            break;
        }
        case rpneed:
        {
            PrintCell("rpneed", 12);
            break;
        }

    }
    std::cout << "\n";
    return 0;
    }

uint8_t TransportRow::edit(TableRow *p_row)
    {
        TransportRow *pointOrderRow = (TransportRow *)p_row;

        setId(p_row->getId());
        m_number = pointOrderRow->getNumber() ;
        m_driver = pointOrderRow->getDriver() ;
        m_payload = pointOrderRow->getPayload() ;
        m_TechCond = pointOrderRow->getTechCond();
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
