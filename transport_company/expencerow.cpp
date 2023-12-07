#include "expencerow.h"

ExpenceRow::ExpenceRow(uint16_t p_index, std::string p_recipient, std::string p_date, std::string p_category, uint64_t p_paymen): TableRow(p_index)
{

}

uint8_t ExpenceRow::show()
{
    return 0;
}
