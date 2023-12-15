#include "orderrow.h"
#include "global.h"
#include <iostream>

OrderRow::OrderRow(uint16_t p_number, uint16_t p_weight, std::string const &p_client, std::string const &p_addressFrom, std::string const &p_addressTo, std::string const &p_status, uint64_t p_payment)
{
    m_number = p_number;
    m_weight = p_weight;
    m_client = p_client;
    m_addressFrom = p_addressFrom;
    m_addressTo = p_addressTo;
    m_status = p_status;
    m_payment = p_payment;
}

uint8_t OrderRow::show()
{
    std::cout << "|";
    PrintCell(std::to_string(getId()), 6);
    std::cout << "|";
    PrintCell(std::to_string(m_number), 8);
    std::cout << "|";
    PrintCell(m_client, 15);
    std::cout << "|";
    PrintCell(std::to_string(m_weight), 8);
    std::cout << "|";
    PrintCell(m_addressFrom, 20);
    std::cout << "|";
    PrintCell(m_addressTo, 20);
    std::cout << "|";
    PrintCell(std::to_string(m_payment), 9);
    std::cout << "|";
    PrintCell(m_status, 15);
    std::cout << "|\n";
    return 0;
}

void OrderRow::showHeaders()
{
    std::cout << "| N    | Number | Client        | Weight | Address from       | Address to         | Payment | Status        |" << std::endl;
    std::cout << "|======|========|===============|========|====================|====================|=========|===============|" << std::endl;
}

uint8_t OrderRow::edit(TableRow * p_row)
{

    OrderRow *pointOrderRow = (OrderRow *)p_row;

    m_number = pointOrderRow->getNumber();
    m_weight = pointOrderRow->getWeight();
    m_client = pointOrderRow->getClient();
    m_addressFrom = pointOrderRow->getAddressFrom();
    m_addressTo = pointOrderRow->getAddressTo();
    m_status = pointOrderRow->getStatus();
    m_payment = pointOrderRow->getPayment();
    return 0;
}

void OrderRow::setNumber(uint16_t p_number)
{
    m_number = p_number;
}

uint16_t OrderRow::getNumber()
{
    return m_number;
}

void OrderRow::setWeight(uint16_t p_weight)
{
    m_weight = p_weight;
}

uint16_t OrderRow::getWeight()
{
    return m_weight;
}

void OrderRow::setClient(std::string const &p_client)
{
    m_client = p_client;
}

std::string OrderRow::getClient()
{
    return m_client;
}

void OrderRow::setAddressFrom(std::string const &p_addressFrom)
{
    m_addressFrom = p_addressFrom;
}

std::string OrderRow::getAddressFrom()
{
    return m_addressFrom;
}

void OrderRow::setAddressTo(std::string const &p_addressTo)
{
    m_addressTo = p_addressTo;
}

std::string OrderRow::getAddressTo()
{
    return m_addressTo;
}

void OrderRow::setStatus(std::string const &p_status)
{
    m_status = p_status;
}

std::string OrderRow::getStatus()
{
    return m_status;
}

void OrderRow::setPayment(uint64_t p_payment)
{
    m_payment = p_payment;
}

uint64_t OrderRow::getPayment()
{
    return m_payment;
}

