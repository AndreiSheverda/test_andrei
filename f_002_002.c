#include <stdio.h> 
#include <math.h>  // ��� �������������� �������
#define _USE_MATH_DEFINES   // ��������� - ��� ����� ��, ����� �� 

float f_002_002(float fR_m) {
	
	float result;
	int GERC;
	
	result=M_PI*pow(fR_m, 2);  /* M_PI  - ��� ����� ��*/
	
	
	printf("\n===================");
	printf("\n R (metr) =%f", fR_m);
	printf("\n result =%f", result);
	printf("\n=====================\n");
	
	for(GERC=700; GERC>=400; GERC=GERC-50) beep(GERC,120);
	return result;
}
