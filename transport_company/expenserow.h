#ifndef EXPENCEROW_H
#define EXPENCEROW_H

#include <stdint.h>
#include <string>
#include "TableRow.h"

/*
 * ExpenceRow - это класс, описывающий строку таблицы расходов,
 * строка хранит данные о расходах(имя, кому выплачиваются деньги,
 * дата проведения оплаты, сумма выплаты в рублях, категория выплаты)
 * класс наследуется от абстрактоного TableRow и реализует его
 * виртуальные методы show() и edit(TableRow * p_row).
 */

class ExpenseRow: public TableRow
{
    std::string m_recipient, m_date, m_category;
    uint64_t m_payment;
    public:
    ExpenseRow(std::string const &p_recipient, std::string const &p_date, std::string const &p_category, int64_t p_payment);
    uint8_t show();
    void showHeaders();
    uint8_t edit(TableRow * p_row);
    void setRecipient(std::string const &p_recipient);
    std::string getRecipient();
    void setDate(std::string const &p_date);
    std::string getDate();
    void setCategory(std::string const &p_category);
    std::string getCategory();
    void setPayment(int64_t p_payment);
    int64_t getPayment();
};

#endif // EXPENCEROW_H
