#include "employeerow.h"
#include "global.h"
#include <iostream>

EmployeeRow::EmployeeRow(uint16_t p_id, std::string p_fio, std::string p_position, std::string p_workplace):TableRow(p_id)
{
    m_fio=p_fio;
    m_position=p_position;
    m_workplace=p_workplace;
}

uint8_t EmployeeRow::show()
{
    std::cout << "|";
    PrintCell(std::to_string(getId()), 6);
    std::cout << "|";
    PrintCell(m_fio, 20);
    std::cout << "|";
    PrintCell(m_position, 20);
    std::cout << "|";
    PrintCell(m_workplace, 20);
    std::cout << "|\n";
    return 0;
}

uint8_t EmployeeRow::edit(TableRow *p_row)
{
    EmployeeRow *pointEmployeeRow = (EmployeeRow *)p_row;

    setId(p_row->getId());
    m_fio = pointEmployeeRow->getFio();
    m_position = pointEmployeeRow->getPosition();
    m_workplace = pointEmployeeRow->getWorkplace();
    return 0;
}

std::string EmployeeRow::getFio()
{
    return m_fio;
}

void EmployeeRow::setFio(std::string p_fio)
{
    m_fio=p_fio;
}

std::string EmployeeRow::getPosition()
{
    return m_position;
}

void EmployeeRow::setPosition(std::string p_position)
{
    m_position=p_position;
}

std::string EmployeeRow::getWorkplace()
{
    return m_workplace;
}

void EmployeeRow::setWorkplace(std::string p_workplace)
{
    m_workplace=p_workplace;
}
