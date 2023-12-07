#ifndef ORDERROW_H
#define ORDERROW_H

#include <cstdint>
#include <string>
#include "TableRow.h"

/*
 * OrderRow - это класс, описывающий строку таблицы заказов
 * строка хранит данные о заказе(адрес отправки, назначения, имя клиента,
 * сумма оплаты в рублях, номер заказа, вес, текущий этап доставки)
 * класс наследуется от абстрактоного TableRow и реализует его
 * виртуальный метод show().
 */

class OrderRow: public TableRow
{
    uint16_t m_id, m_weight;
    std::string m_client, m_addressFrom, m_addressTo, m_status;
    uint64_t m_payment;
    public:
    OrderRow(uint16_t p_index, uint16_t p_id, uint16_t p_weight, std::string p_client, std::string p_addressFrom,
                     std::string p_addressTo, std::string p_status, uint64_t p_payment);
    uint8_t show();
};

#endif // ORDERROW_H
