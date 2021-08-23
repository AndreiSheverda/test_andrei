#include <stdio.h> 

int f_003_002(int a, int b, int c, int d) {
	printf("\n a=%d", a);
	printf("\n b=%d", b);
	printf("\n c=%d", c);
	printf("\n d=%d", d);
	printf("\n ===================");
	
	int I, i, max, min, result;
	I=4;
	int mass[I]; 
	mass[0] = a;
	mass[1] = b;
	mass[2] = c;
	mass[3] = d;
	
	max = mass[0];
	min = mass[0];
	for(i = 0; i < I; i++)
	  {
		  if(max < mass[i]) max = mass[i];
		  if(min > mass[i]) min = mass[i]; 
	  }
	result = max;
	printf("\n result= %d\n============= ", result);
			
	return result;
}
