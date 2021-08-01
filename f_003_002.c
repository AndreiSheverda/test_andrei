#include <stdio.h> 

int f_003_002(int fa, int fb, int fc, int fd) {
	printf("\n a=%d", fa);
	printf("\n b=%d", fb);
	printf("\n b=%d", fc);
	printf("\n b=%d", fd);
	printf("\n ===================");
	
	int I, i, max, min;
	I=4;
	int mass[I];
	mass[0]=fa;
	mass[1]=fb;
	mass[2]=fc;
	mass[3]=fd;
	
	max=mass[0];
	min=mass[0];
	for(i=0; i<I; i++)
	  {
		  if(max < mass[i]) max = mass[i];
		  if(min > mass[i]) min = mass[i]; 
	  }
	printf("\n min = %d", min);
	printf("\n max = %d\n ", max);
	
	int result=max;
	printf("\n result= %d\n============= ", result);
	system("pause");
		
	return 0;
}
