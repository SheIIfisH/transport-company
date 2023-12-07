#ifndef TRANSPORTROW_H
#define TRANSPORTROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"

typedef enum{operable, mtrequired, rprequired, rpneed} TechStatus_t;

class TransportRow : public TableRow
{
private:
    uint16_t m_number;
    std::string m_driver;
    uint32_t m_payload;
    TechStatus_t m_TechCond;
public:
    TransportRow(uint16_t p_index,
                 uint16_t p_id,
                 std::string p_driver,
                 uint32_t p_payload,
                 TechStatus_t p_TechCond);
    virtual uint8_t show();
    virtual uint8_t edit(TableRow * p_row);
    void setNumber(uint16_t p_number);
    uint16_t getNumber(){return m_number;}
    void setDriver(std::string p_driver);
    std::string getDriver(){return m_driver;}
    void setPayload(uint32_t p_payload);
    uint32_t getPayload(){return m_payload;}
    void setTechCond(TechStatus_t p_TechCond);
    TechStatus_t getTechCond(){return m_TechCond;}

#endif // TRANSPORTROW_H
