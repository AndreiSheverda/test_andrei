#include <stdio.h> 
#include <math.h>  // ??? ?????????????? ???????
#define _USE_MATH_DEFINES   // ????????? - ??? ????? ??, ????? ?? 

float f_002_002(float R_m) {
	
	float result;
	result=M_PI*pow(R_m, 2);  /* M_PI  - ??? ????? ??*/
	
	
	printf("\n===================");
	printf("\n R (metr) =%f", R_m);
	printf("\n result =%f", result);
	printf("\n=====================\n");
	
	return result;
}
