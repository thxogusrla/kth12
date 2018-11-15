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
	printf("%d번 사원의 월급은 %d만원입니다.\n",i,a[i]);
	printf("모든 사원의 월급의 합은 %d만원입니다.\n",array_sum(a,10));
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