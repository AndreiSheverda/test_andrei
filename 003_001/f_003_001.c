#include <stdio.h> 

int f_003_001(int a, int b) 
{
	printf("\n a=%d", a);
	printf("\n b=%d", b);
	printf("\n ===================");
	
	int result=a;
	
	if(result < b) { result = b; }
	printf("\n result=%d", result);
	printf("\n ===================");
		
	return result;
}

