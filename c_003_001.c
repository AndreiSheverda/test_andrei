#include <stdio.h> 

int f_003_001(int fa, int fb); 
/*
{
	printf("\n a=%d", fa);
	printf("\n b=%d", fb);
	printf("\n ===================");
	
	int result=fa;
	
	if(result<fb) { result=fb; }
	printf("\n result=%d", result);
	printf("\n ===================");
	system("pause");	
	return 0;
}
*/

int main()
{
	int a, b;
	
	a=18;
	b=-2;
	f_003_001(a, b);

	return 0;
  
}

