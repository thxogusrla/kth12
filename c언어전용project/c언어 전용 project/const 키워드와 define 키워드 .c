#include<stdio.h>
#define TAX_RATE 0.2
int main()
{
	const int month = 12;  //const�� ������ ���� �����¡ �ʰ� �ϴ� ��!
	int m_salary, y_salary;

	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&m_salary);

	y_salary = month * m_salary;
	printf("������ %d�Դϴ�. \n",y_salary);
	printf("������ %f�Դϴ�. \n",y_salary*TAX_RATE);
	return 0;
}
int sum(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}