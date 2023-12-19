#include "reportscreen.h"
#include "orderrow.h"
#include "expenserow.h"
#include <cstdlib>
#include <iostream>

ReportScreen::ReportScreen(Table* p_orderTable, Table* p_expenseTable)
{

    uint16_t i = 1;
    ExpenseRow *pointExpenseRow = (ExpenseRow*)(p_expenseTable->getRow(i++));
    std::string category;
    int64_t payment;
    OrderRow *pointOrderRow;

    m_expense = 0;
    while (pointExpenseRow != NULL)
        {
        payment = pointExpenseRow->getPayment();
        category = pointExpenseRow->getCategory();
        m_expense += payment;
        if (m_expenseCategories.find(category) == m_expenseCategories.end())
            {
            m_expenseCategories.insert(make_pair(category, payment));
            }
        else
            {
            m_expenseCategories[category] += payment;
            }
        pointExpenseRow = (ExpenseRow*)(p_expenseTable->getRow(i++));
        }
    m_income = 0;
    i = 1;
    pointOrderRow = (OrderRow*)(p_orderTable->getRow(i++));
    while (pointOrderRow != NULL)
        {
        if(pointOrderRow->getStatus() == delivered)
            m_income += pointOrderRow->getPayment();
        pointOrderRow = (OrderRow*)(p_orderTable->getRow(i++));
        }
}

uint8_t ReportScreen::formReport()
{
    std::cout << "total income: " << m_income << std::endl;
    std::cout << "Expense:" << '\n';
    for (std::map<std::string, int64_t>::iterator it = m_expenseCategories.begin(), end = m_expenseCategories.end(); it != end; ++it)
        {
        std::cout << it->first << ": " << it->second << std::endl;
        }
    std::cout << "total expenses: " << m_expense << std::endl << std::endl << "total: " << m_income - m_expense << std::endl;
    return 0;
}
