#include <stdio.h> 

int f_003_003(int fa, int fb, int fc, int fd) {
	printf("\n a=%d", fa);
	printf("\n b=%d", fb);
	printf("\n b=%d", fc);
	printf("\n b=%d", fd);
	printf("\n ===================");
	
	int I, i, max, pred_max, min;
	I=4;
	int mass[I];
	mass[0]=fa;
	mass[1]=fb;
	mass[2]=fc;
	mass[3]=fd;
	
	max=mass[0];
	pred_max=mass[0];
	min=mass[0];
	for(i=0; i<I; i++)
	  {
		  if(max < mass[i]) 
			  {
				  pred_max=max;
				  max = mass[i];
			  }
		  if(min > mass[i]) min = mass[i]; 
	  }
	printf("\n min = %d", min);
	printf("\n max = %d\n ", max);
	
	int result=pred_max;
	printf("\n result= %d\n============= ", result);
	system("pause");
		
	return 0;
}
