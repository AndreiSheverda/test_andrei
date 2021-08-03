#include <stdio.h> 

int f_003_003(int fa, int fb, int fc, int fd);

int main()
{
	int a, b, c, d;
	
	
	a=-12;
	b=0;
	c=-9;
	d=-8;
	f_003_003(a, b, c, d);
	
	a=-12;
	b=-8;
	c=-9;
	d=0;
	f_003_003(a, b, c, d);
	
	
	a=-8;
	b=-12;
	c=-9;
	d=0;
	f_003_003(a, b, c, d);
	
	return 0;
  
}
