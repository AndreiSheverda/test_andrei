#include <stdio.h> 
#include <math.h>  // для математических функций
#define _USE_MATH_DEFINES   // директива - для числа Пи, число Пи 

float f_003_004(int fside, int fradius) {
	
		/*
	валидный (valid) - правильный, корректный, работающий
	невалидный (invalid) - неправильный, некорректный, неработающий
	*/
	
	/*
	side - длина стороны квадрата в сантиметрах 
	radius - радиус круга в сантиметрах 
	*/
	float result;
	
	float S_square, S_circle;  // S_square - площадь квадрата в метрах, S_circle= площадб круга в метрах
	
	printf("\n===================\n");
	printf("\n side=%d", fside);
	printf("\n radius=%d", fradius);
	
	if (fside>0) {S_square=(fside/100.0)*(fside/100.0); }
	else {result=-1; goto EXIT_invalid_side;}
	
	if (fradius>0) {S_circle=M_PI*pow(fradius/100.0, 2); }
	else {result=-1; goto EXIT_invalid_radius;}
	
	if(S_square==S_circle) {printf("\n S_square=S_circle =%f", S_square );}
	else {
		     if(S_square>S_circle) {result=S_circle;}
				  else {result=S_square;}
			    
	     }
	
	printf("\n S_square=%f", S_square);
	printf("\n S_circle=%f", S_circle);	
	printf("\n\n result = %f", result);
	printf("\n===================\n");
	goto EXIT;
	
	EXIT_invalid_side:
	printf("\n ERROR - side its invalid"); 
	printf("\n\n result = %f\n", result);
	printf("\n===================\n");
	goto EXIT;
	
	EXIT_invalid_radius:
	printf("\n ERROR - radius its invalid"); 
	printf("\n\n result = %f\n", result);
	printf("\n===================\n");
	goto EXIT;
	
	
	EXIT:
	system("pause");	
		
	return result;
}
