#include <string>
#include <math.h>

//deposit - сумма вклада; term - срок вклада; percent - процентная ставка; 
//capitalization - срок начисления процентов (в месяцах);

//Простые проценты (без капитализации)
unsigned __int64 simple_deposit(unsigned int deposit, unsigned __int16 term, float percent){
	unsigned __int64 money = 0;
	money = deposit * (1 + term*percent / (100 * 365));
	return money;
}
//Сложные проценты (с капитализацией)
unsigned __int64 capitalized_deposit(unsigned int deposit, unsigned __int16 term, float percent, unsigned __int8 capitalization, unsigned __int8 replenishment_period, unsigned int replenishment_amount){
	unsigned __int64 money = 0;
	unsigned int num_of_replenishment = term / replenishment_period;; //количество пополнений втечение срока
	money = deposit * pow(1 + capitalization * 30 * percent / (100 * 365), num_of_replenishment);
	return money;
}

unsigned __int64 count_my_money(unsigned int deposit, unsigned __int16 term, float percent, unsigned __int8 capitalization)
{
	unsigned __int64 money=0; 
	if (capitalization = 0)
		money = simple_deposit(deposit,term,percent);
	else money = capitalized_deposit(deposit,term,percent,capitalization);
	return money;
}