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
 * виртуальные методы show() и edit(TableRow * p_row).
 */

class ExpenceRow: public TableRow
{
    std::string m_recipient, m_date, m_category;
    uint64_t m_payment;
    public:
    ExpenceRow(uint16_t p_index, std::string const &p_recipient, std::string const &p_date, std::string const &p_category, uint64_t p_paymen);
    uint8_t show();
    uint8_t edit(TableRow * p_row);
    void setRecipient(std::string const &p_recipient);
    std::string getRecipient();
    void setDate(std::string const &p_date);
    std::string getDate();
    void setCategory(std::string const &p_category);
    std::string getCategory();
    void setPayment(uint64_t p_payment);
    uint64_t getPayment();
};

#endif // EXPENCEROW_H
