#include <string>

unsigned __int64 count_my_money(unsigned int deposit, string
	valuta, unsigned __int16 term, float percent, unsigned __int8 capitalization, unsigned __int8 replenishment_period, unsigned int replenishment_amount)
{
	unsigned __int64 money;
	money = deposit + int(deposit*percent/12*term);
	
	
	return 0;
}