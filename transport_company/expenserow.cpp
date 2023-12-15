#include "expenserow.h"
#include "global.h"
#include <iostream>

ExpenseRow::ExpenseRow(std::string const &p_recipient,
                       std::string const &p_date,
                       std::string const &p_category,
                       uint64_t p_payment)
{
    m_recipient = p_recipient;
    m_date = p_date;
    m_category = p_category;
    m_payment = p_payment;
}

uint8_t ExpenseRow::show()
{
    std::cout << "|";
    PrintCell(std::to_string(getId()), 6);
    std::cout << "|";
    PrintCell(m_recipient, 30);
    std::cout << "|";
    PrintCell(m_date, 10);
    std::cout << "|";
    PrintCell(std::to_string(m_payment), 12);
    std::cout << "|";
    PrintCell(m_category, 19);
    std::cout << "|\n";
    return 0;
}

uint8_t ExpenseRow::edit(TableRow * p_row)
{
    ExpenseRow *pointExpenseRow = (ExpenseRow *)p_row;

    m_recipient = pointExpenseRow->getRecipient() ;
    m_date = pointExpenseRow->getDate() ;
    m_category = pointExpenseRow->getCategory() ;
    m_payment = pointExpenseRow->getPayment();
    return 0;
}

void ExpenseRow::setRecipient(std::string const &p_recipient)
{
    m_recipient = p_recipient;
}

std::string ExpenseRow::getRecipient()
{
    return m_recipient;
}

void ExpenseRow::setDate(std::string const &p_date)
{
    m_date = p_date;
}

std::string ExpenseRow::getDate()
{
    return m_date;
}

void ExpenseRow::setCategory(std::string const &p_category)
{
    m_category = p_category;
}

std::string ExpenseRow::getCategory()
{
    return m_category;
}
void ExpenseRow::setPayment(uint64_t p_payment)
{
    m_payment = p_payment;
}

uint64_t ExpenseRow::getPayment()
{
    return m_payment;
}
