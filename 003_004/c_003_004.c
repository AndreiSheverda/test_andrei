
float f_003_004(int side, int radius);

int main()
{
	/*
	�������� - ����������, ����������, ����������
	���������� - ������������, ������������, ������������
	*/
	
	/*
	side - ����� ������� �������� � ����������� 
	radius - ������ ����� � ����������� 
	*/
	int side, radius;
	float result;
	
	side = 10;
	radius = 100;
	result = f_003_004(side, radius);
	
	
	side = -123;  // �� ������� ��������� � ������������� �������� ������� ����� ������ �� ����� ���� 0 ��� ������������� ��������� - ��� ���������� ������� ��������
	radius = 100;
	result = f_003_004(side, radius);
	
	
	return 0;
  
}
