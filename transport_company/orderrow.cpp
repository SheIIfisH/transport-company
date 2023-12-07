#include "orderrow.h"



OrderRow::OrderRow(uint16_t p_index, uint16_t p_id, uint16_t p_weight, std::string p_client, std::string p_addressFrom, std::string p_addressTo, std::string p_status, uint64_t p_payment): TableRow(p_index)
{

}

uint8_t OrderRow::show()
{
    return 0;
}
