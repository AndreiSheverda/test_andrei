#include <stdio.h> 

// ��������� ���� ����������  - 31.12.1918
// ������ ���� �������������� - 14.02.2018 ,�.�. � 1918 ���� 1 ���� -> 14 ����, 2 ���� -> 15 ���� � �.�. ����� ���� � ������� 2018 � - 14 ����

short int day_of_programmer(short int Year);

int main()
{
	short int Year, result_day;
	
	scanf("%d", &Year);
	result_day = day_of_programmer(Year);
	//system("pause");
	printf("%d", result_day); 
	
	return 0;
}
