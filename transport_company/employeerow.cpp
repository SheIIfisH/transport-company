#include "employeerow.h"


EmployeeRow::EmployeeRow(uint16_t p_id, std::string p_fio, std::string p_position, std::string p_workplace):TableRow(p_id)
{

}

uint8_t EmployeeRow::show()
{
    return 0;
}

uint8_t EmployeeRow::edit(TableRow *p_row)
{
    return 0;
}

std::string EmployeeRow::getFio()
{
    return "";
}

void EmployeeRow::setFio(std::string p_fio)
{

}

std::string EmployeeRow::getPosition()
{
    return "";
}

void EmployeeRow::setPosition(std::string p_position)
{

}

std::string EmployeeRow::getWorkplace()
{
    return "";
}

void EmployeeRow::setWorkplace(std::string p_workplace)
{

}
