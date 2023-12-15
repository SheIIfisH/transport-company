#ifndef REPORTSCREEN_H
#define REPORTSCREEN_H

#include <string>
#include <map>
#include "table.h"

/*
 * ReportScreen - это класс, описывающий экран вывода
 * финансового отчета. Он содержит ссылки на таблицы
 * заказов и таблицы доходов, данные из которых он
 * использует для формирования финансового отчета
 */



class ReportScreen
{
public:
    uint64_t m_income;
    uint64_t m_expense;
    std::map<std::string, uint64_t> m_expenseCategories;
public:
    ReportScreen(Table* p_orderTable, Table* p_expenseTable);
    uint8_t formReport();
};

#endif // REPORTSCREEN_H
