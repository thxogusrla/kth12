#include<stdio.h>
//100 : 4.3 = x : y  x =( 100 * y ) / 4.3
void convert(double *grade, double *score, int size)
{
	int i;
	for (i = 0; i < size; i++)
		score[i] = (grade[i] * 100) / 4.3;
}
int main()
{
	double grade[10], score[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d��° �л��� ������ �Է��Ͻÿ� :",i);
		scanf("%lf", &grade[i]);
	}
	printf("�л����� ���� = {");
	for (i = 0; i < 10; i++)
		printf(" %.2lf  ", grade[i]);
	printf("}\n");
	convert(grade, score, 10);
	printf("��ȯ�� �л����� ���� = {");
	for (i = 0; i < 10; i++)
	{
		printf(" %.2lf  ", score[i]);
	}
	printf("}");
}