#include "orderrow.h"

OrderRow::OrderRow(uint16_t p_index, uint16_t p_id, uint16_t p_weight, std::string const &p_client, std::string const &p_addressFrom, std::string const &p_addressTo, std::string const &p_status, uint64_t p_payment): TableRow(p_index)
{

}

uint8_t OrderRow::show()
{
    return 0;
}

uint8_t OrderRow::edit(TableRow * p_row)
{
    return 0;
}

void OrderRow::setId(uint16_t p_id)
{
    m_id = p_id;
}

uint16_t OrderRow::getId()
{
    return m_id;
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

