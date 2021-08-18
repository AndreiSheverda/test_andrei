#include <stdio.h> 
#include <math.h>  // для математических функций

float f_002_001(float a_m) {
	
	float result;
	int GERC;
	result=pow(a_m, 2);  /* функция pow(a,b) - возведение  а в степень b*/
	
	printf("\n===================");
	printf("\n a (metr) =%f", a_m);
	printf("\n result =%f", result);
	printf("\n=====================\n");
	
	for(GERC=700; GERC>=400; GERC=GERC-50) beep(GERC,120);
	return result;
	
	
}
