#include <stdio.h> 
#include <math.h>  // ��� �������������� �������

float f_002_001(float fa_m) {
	
	float result;
	int GERC;
	result=pow(fa_m, 2);  /* ������� pow(a,b) - ����������  � � ������� b*/
	
	
	printf("\n===================");
	printf("\n a (metr) =%f", fa_m);
	printf("\n result =%f", result);
	printf("\n=====================\n");
	
	for(GERC=700; GERC>=400; GERC=GERC-50) beep(GERC,120);
	return result;
}
