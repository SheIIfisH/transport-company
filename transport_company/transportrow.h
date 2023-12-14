#ifndef TRANSPORTROW_H
#define TRANSPORTROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"

/*
 * TransportRow - это класс, описывающий строку таблицы транспортных
 * средств, строка хранит данные о транспортных средствах(номер, ФИО
 * водителя, грузоподъемность, техническое состояние)
 * класс наследуется от абстрактоного TableRow и реализует его
 * виртуальные методы show() и edit(TableRow * p_row).
 */

typedef enum{operable, mtrequired, rprequired, rpneed} TechStatus_t;

class TransportRow : public TableRow
{
private:
    uint16_t m_number;
    std::string m_driver;
    uint32_t m_payload;
    TechStatus_t m_TechCond;
public:
    TransportRow(uint16_t p_number,
                 std::string p_driver,
                 uint32_t p_payload,
                 TechStatus_t p_TechCond);
    virtual uint8_t show();
    virtual uint8_t edit(TableRow * p_row);
    void setNumber(uint16_t p_number);
    uint16_t getNumber();
    void setDriver(std::string p_driver);
    std::string getDriver();
    void setPayload(uint32_t p_payload);
    uint32_t getPayload();
    void setTechCond(TechStatus_t p_TechCond);
    TechStatus_t getTechCond();
};
#endif // TRANSPORTROW_H
