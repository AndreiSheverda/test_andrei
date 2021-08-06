#include <stdio.h> 
#include <math.h>  // для математических функций
#define _USE_MATH_DEFINES   // директива - для числа Пи, число Пи 

float f_002_003(float fR_sm) {
	
	float result;
		
	
	result=M_PI*pow(fR_sm/100.0, 2);  /* M_PI  - это число ПИ*/
	
	printf("\n===================");
	printf("\n R (sm) = %f", fR_sm);
	printf("\n result = %f", result);
	printf("\n=====================\n");
	
	
	return result;
}
