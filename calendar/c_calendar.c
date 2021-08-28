#include <stdio.h> 

// Последний день Юлианского  - 31.12.1918
// Первый дени Григорианского - 14.02.2018 ,т.е. в 1918 году 1 февр -> 14 февр, 2 февр -> 15 февр и т.д. ВСЕГО дней в феврале 2018 г - 14 дней

short int day_of_programmer(short int Year);

int main()
{
	short int Year, result_day;
	
	scanf("%d", &Year);
	result_day = day_of_programmer(Year);
	//system("pause");
	printf("%d", result_day); 
	
	return 0;
}
