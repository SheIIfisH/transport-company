#include "expencerow.h"

ExpenceRow::ExpenceRow(uint16_t p_index, std::string const &p_recipient, std::string const &p_date, std::string const &p_category, uint64_t p_paymen): TableRow(p_index)
{

}

uint8_t ExpenceRow::show()
{
    return 0;
}

uint8_t ExpenceRow::edit(TableRow * p_row)
{
    return 0;
}

void ExpenceRow::setRecipient(std::string const &p_recipient)
{
    m_recipient = p_recipient;
}

std::string ExpenceRow::getRecipient()
{
    return m_recipient;
}

void ExpenceRow::setDate(std::string const &p_date)
{
    m_date = p_date;
}

std::string ExpenceRow::getDate()
{
    return m_date;
}

void ExpenceRow::setCategory(std::string const &p_category)
{
    m_category = p_category;
}

std::string ExpenceRow::getCategory()
{
    return m_category;
}
void ExpenceRow::setPayment(uint64_t p_payment)
{
    m_payment = p_payment;
}

uint64_t ExpenceRow::getPayment()
{
    return m_payment;
}
