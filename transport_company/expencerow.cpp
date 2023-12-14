#include "expencerow.h"
#include "global.h"
#include <iostream>

ExpenceRow::ExpenceRow(uint16_t p_index,
                       std::string const &p_recipient,
                       std::string const &p_date,
                       std::string const &p_category,
                       uint64_t p_paymen): TableRow(p_index)
{
    m_recipient = p_recipient;
    m_date = p_date;
    m_category = p_category;
    m_payment = p_paymen;
}

uint8_t ExpenceRow::show()
{
    std::cout << "|";
    PrintCell(std::to_string(getId()), 6);
    std::cout << "|";
    PrintCell(m_recipient, 30);
    std::cout << "|";
    PrintCell(m_date, 10);
    std::cout << "|";
    PrintCell(std::to_string(m_payment), 7);
    std::cout << "|";
    PrintCell(m_category, 19);
    std::cout << "|\n";
    return 0;
}

uint8_t ExpenceRow::edit(TableRow * p_row)
{
    ExpenceRow *pointExpenceRow = (ExpenceRow *)p_row;

    setId(p_row->getId());
    m_recipient = pointExpenceRow->getRecipient() ;
    m_date = pointExpenceRow->getDate() ;
    m_category = pointExpenceRow->getCategory() ;
    m_payment = pointExpenceRow->getPayment();
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
