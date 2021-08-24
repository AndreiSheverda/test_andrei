#include <stdio.h> 

int f_003_003(int a, int b, int c, int d)
{
	printf("\n a=%d", a);
	printf("\n b=%d", b);
	printf("\n c=%d", c);
	printf("\n d=%d", d);
		
	int I, Imax, i, max, pred_max, min, result;
	I=4;
	int mass[I];
	mass[0] = a;
	mass[1] = b;
	mass[2] = c;
	mass[3] = d;
	
	max = mass[0];
	min = mass[0];
	Imax = 0;
	for(i = 0; i < I; i++)
	{
		if(max < mass[i]) 
		{
			max = mass[i];		
			max = i;			  
		}
		if(min > mass[i])
		{ 
			min = mass[i];
		}
	}
	pred_max = min;
	for(i = 0; i < I; i++)
	{
		if(i!=Imax) 
		{
			if(pred_max < mass[i]) { pred_max = mass[i]; }
		}	
	}
	result = pred_max;
	printf("\n result= %d \n ============= ", result);
		
	return result;
}
