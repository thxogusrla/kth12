#include<stdio.h>
#include<stdlib.h>
int array_sum(int *a, int size);

int main()
{
	int i, a[10];

	for (i = 0; i < 10; i++)
	{
		a[i] = (rand() % 100) + 200;
	}
	for(int i=0;i<10;i++)
	printf("%d�� ����� ������ %d�����Դϴ�.\n",i,a[i]);
	printf("��� ����� ������ ���� %d�����Դϴ�.\n",array_sum(a,10));
}
int array_sum(int *a, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum;
}