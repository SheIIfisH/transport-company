#ifndef ORDERROW_H
#define ORDERROW_H

#include <stdint.h>
#include <string>
#include "TableRow.h"

/*
 * OrderRow - это класс, описывающий строку таблицы заказов
 * строка хранит данные о заказе(адрес отправки, назначения, имя клиента,
 * сумма оплаты в рублях, номер заказа, вес, текущий этап доставки)
 * класс наследуется от абстрактоного TableRow и реализует его
 * виртуальные методы show() и edit(TableRow * p_row).
 */

class OrderRow: public TableRow
{
    uint16_t m_number, m_weight;
    std::string m_client, m_addressFrom, m_addressTo, m_status;
    uint64_t m_payment;
    public:
    OrderRow(uint16_t p_number, uint16_t p_weight, std::string const &p_client,
             std::string const &p_addressFrom, std::string const &p_addressTo, std::string const &p_status,
             uint64_t p_payment);
    uint8_t show();
    uint8_t edit(TableRow * p_row);
    void setNumber(uint16_t p_number);
    uint16_t getNumber();
    void setWeight(uint16_t p_weight);
    uint16_t getWeight();
    void setClient(std::string const &p_client);
    std::string getClient();
    void setAddressFrom(std::string const &p_addressFrom);
    std::string getAddressFrom();
    void setAddressTo(std::string const &p_addressTo);
    std::string getAddressTo();
    void setStatus(std::string const &p_status);
    std::string getStatus();
    void setPayment(uint64_t p_payment);
    uint64_t getPayment();
};

#endif // ORDERROW_H
