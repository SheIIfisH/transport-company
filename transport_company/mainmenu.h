#ifndef MAINMENU_H
#define MAINMENU_H

#include <stdint.h>
#include "table.h"

/*
 * MainMenu - это класс, описывающий главное меню программы
 *
 * Он содержит данные все данные, с которыми будет работать программа,
 * и методы для их обработки.
 */

class MainMenu
{
private:
    Table m_premisesTable;
    Table m_employeeTable;
    Table m_transportTable;
    Table m_orderTable;
    Table m_expenseTable;

    uint8_t showPrimises();
    uint8_t showEmployees();
    uint8_t showTransport();
    uint8_t showOrders();
    uint8_t showExpenses();
    uint8_t createReport();
public:
    MainMenu();
    void interact();
};

#endif // MAINMENU_H
