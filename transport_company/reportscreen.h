#ifndef REPORTSCREEN_H
#define REPORTSCREEN_H

#include <string>
#include <list>
#include "table.h"

typedef struct {
    std::string category;
    uint64_t payment;
} expenceCategory_t;

class ReportScreen
{
public:
    uint64_t m_income;
    uint64_t m_expence;
    std::list<expenceCategory_t> m_expenceCategories;
    Table m_orderTable;
    Table m_expenseTable;
public:
    ReportScreen(Table* p_orderTable, Table* p_expenseTable);
    uint8_t formReport();
};

#endif // REPORTSCREEN_H
