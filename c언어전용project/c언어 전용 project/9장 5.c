#include<stdio.h>
//���� ���� 1/1 + 1/2 + 1/3 + ...+1/n
double recrusive(double a)
{
	if (a == 1) return 1;
	else return  (1/a + recrusive(a-1));
}
int main()
{
	double a;
	printf("�� �Է�:");
	scanf("%lf",&a);
	printf("%lf", recrusive(a));
}
