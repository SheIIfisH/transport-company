#ifndef EXPENCEROW_H
#define EXPENCEROW_H

#include <cstdint>
#include <string>
#include "TableRow.h"

/*
 * ExpenceRow - это класс, описывающий строку таблицы расходов,
 * строка хранит данные о расходах(имя, кому выплачиваются деньги,
 * дата проведения оплаты, сумма выплаты в рублях, категория выплаты)
 * класс наследуется от абстрактоного TableRow и реализует его
 * виртуальный метод show().
 */

class ExpenceRow: public TableRow
{
    std::string m_recipient, m_date, m_category;
    uint64_t m_payment;
    public:
    ExpenceRow(uint16_t p_index, std::string p_recipient, std::string p_date, std::string p_category, uint64_t p_paymen);
    uint8_t show();
};

#endif // EXPENCEROW_H
