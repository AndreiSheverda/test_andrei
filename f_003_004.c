#include <stdio.h> 
#include <math.h>  // ��� �������������� �������
#define _USE_MATH_DEFINES   // ��������� - ��� ����� ��, ����� �� 

float f_003_004(int side, int radius) {
	
		/*
	�������� (valid) - ����������, ����������, ����������
	���������� (invalid) - ������������, ������������, ������������
	*/
	
	/*
	side - ����� ������� �������� � ����������� 
	radius - ������ ����� � ����������� 
	*/
	float result;
	
	float S_square, S_circle;  // S_square - ������� �������� � ������, S_circle= ������� ����� � ������
	
	printf("\n===================\n");
	printf("\n side=%d", side);
	printf("\n radius=%d", radius);
	
	if (side>0) {S_square=(side/100.0)*(side/100.0); }
	else {result=-1; goto EXIT_invalid_side;}
	
	if (radius>0) {S_circle=M_PI*pow(radius/100.0, 2); }
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
