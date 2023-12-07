#ifndef TRANSPORTROW_H
#define TRANSPORTROW_H

#include <stdint.h>
#include <string>
#include "tablerow.h"
#include "global.h"

class TransportRow : public TableRow
{
private:
    uint16_t m_id;
    std::string m_driver;
    uint32_t m_payload;
    TechStatus_t m_TechCond;
public:
    TransportRow(uint16_t p_index,
                 uint16_t p_id,
                 std::string p_driver,
                 uint32_t p_payload,
                 TechStatus_t p_TechCond);
    virtual uint8_t show() = 0;
};

#endif // TRANSPORTROW_H
