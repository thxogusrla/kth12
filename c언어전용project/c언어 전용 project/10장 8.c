#include<stdio.h>
#include<math.h>
#define size 5
double mean(int a[])
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum / size;
}
double po(int a[]) //ǥ������ ���ϴ� �Լ� ���� ������ - ��� ��.
{
	double z;
	double sum=0;
	z = mean(a);
	for (int i = 0; i < size; i++)
	{
		sum += (a[i] - z)*(a[i] - z);
	}
	return sqrt(sum / size);
}
int main()
{
	int a[size] = { 0 };
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d��° ������ �Է�:",i);
		scanf("%d",&a[i]);
	}
	printf("����� ���� %lf�Դϴ�.",mean(a));
	printf("ǥ�������� ���� %lf�Դϴ�.",po(a));
	return 0;
}
