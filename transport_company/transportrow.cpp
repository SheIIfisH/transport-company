#include "transportrow.h"

TransportRow::TransportRow(uint16_t p_index,
                           uint16_t p_id,
                           std::string p_driver,
                           uint32_t p_payload,
                           TechStatus_t p_TechCond):TableRow(p_index)
{

}

uint8_t TransportRow::show()
{
    return 0;
}

uint8_t TransportRow::edit(TableRow *p_row)
{
    return 0;
}
