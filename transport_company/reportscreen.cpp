#include "reportscreen.h"
#include "orderrow.h"
#include "expencerow.h"
#include <cstdlib>
#include <iostream>

ReportScreen::ReportScreen(Table* p_orderTable, Table* p_expenseTable)
{

    uint32_t i = 1;
    ExpenceRow *pointExpenceRow = (ExpenceRow*)(p_expenseTable->getRow(i++));
    std::string category;
    uint64_t payment;
    OrderRow *pointOrderRow;

    m_expence = 0;
    while (pointExpenceRow != NULL)
        {
        payment = pointExpenceRow->getPayment();
        category = pointExpenceRow->getCategory();
        m_expence += payment;
        if (m_expenceCategories.find(category) == m_expenceCategories.end())
            {
            m_expenceCategories.insert(make_pair(category, payment));
            }
        else
            {
            m_expenceCategories[category] += payment;
            }
        pointExpenceRow = (ExpenceRow*)(p_expenseTable->getRow(i++));
        }
    m_income = 0;
    i = 1;
    pointOrderRow = (OrderRow*)(p_orderTable->getRow(i++));
    while (pointOrderRow != NULL)
        {
        m_income += pointOrderRow->getPayment();
        pointOrderRow = (OrderRow*)(p_orderTable->getRow(i++));
        }
}

uint8_t ReportScreen::formReport()
{
    std::cout << "Expence:" << '\n';
    for (std::map<std::string, uint64_t>::iterator it = m_expenceCategories.begin(), end = m_expenceCategories.end(); it != end; ++it)
        {
        std::cout << it->first << ": " << it->second << '\n';
        }
    std::cout << "total expenses: " << m_expence << '\n' << "total income: " << m_income << '\n' << "total profit: " << m_income - m_expence << '\n';
    return 0;
}
