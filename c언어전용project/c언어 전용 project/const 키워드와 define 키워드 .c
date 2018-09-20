#include<stdio.h>
#define TAX_RATE 0.2
int main()
{
	const int month = 12;  //const의 역할은 값이 변경되징 않게 하는 것!
	int m_salary, y_salary;

	printf("월급을 입력하시오 :");
	scanf("%d",&m_salary);

	y_salary = month * m_salary;
	printf("연봉은 %d입니다. \n",y_salary);
	printf("세금은 %f입니다. \n",y_salary*TAX_RATE);
	return 0;
}
int sum(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}