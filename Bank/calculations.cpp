#include <string>
#include <math.h>

//deposit - сумма вклада; term - срок вклада; percent - процентная ставка; 
//capitalization - срок начисления процентов (в месяцах);

//Простые проценты (без капитализации)
double simple_deposit(double deposit, unsigned __int16 term, double percent){
	unsigned __int64 money = 0;
	money = deposit * (1 + term*percent / (100 * 365));
	return money;
}
//Сложные проценты (с капитализацией)
double capitalized_deposit(double deposit, unsigned __int16 term, double percent, unsigned __int8 capitalization){
	double money = 0;
	unsigned int num_of_cap = unsigned int(term / capitalization); //количество периодов капитализации
	money = deposit * pow(1 + capitalization * 30 * percent / (100 * 365), num_of_cap);
	return money;
}

double count_my_money(double deposit, unsigned __int16 term, double percent, unsigned __int8 capitalization)
{
	double money = 0;
	if (capitalization = 0)
		money = simple_deposit(deposit,term,percent);
	else money = capitalized_deposit(deposit,term,percent,capitalization);
	return money;
}