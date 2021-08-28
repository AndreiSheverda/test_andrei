#include <stdio.h> 

short int day_of_programmer(short int Year)
{
	short int Year_visok, result_day, day_256, I, day_i;
	int day_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
	if(Year < 1918)                              // Ulian calendar
	{
	if(Year%4 ==0) {Year_visok = 1;}
	else {Year_visok = 0;}
	}
	if(Year >= 1918)                              // Grigirian calendarelse
	{
	 if(Year%400 ==0 || Year%100 !=0 && Year%4 ==0) {Year_visok = 1;}
	 else {Year_visok = 0;}
	}
	
	day_256 = 256;
	I=0;
	day_i = day_month[0];
	while(day_i < day_256)
	{
		I = I+1;
		if(Year == 1918 && I == 1)
		{
			day_i = day_i + (day_month[1] - 14);
			if(Year_visok == 1 && I == 1)
			{
				day_i = day_i + 1;
			}
		}
		else 
		{
			day_i = day_i + day_month[I];
			if(Year_visok == 1 && I == 1)
			{
				day_i = day_i + 1;
			}
				
		}
	}
	result_day = day_256 - (day_i - day_month[I]);
	return result_day;
	return I;
}

