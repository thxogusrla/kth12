#include<stdio.h>
#include<stdlib.h>
void array_fill(int *a, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		a[i] = rand() % 10;
	}
}
int main(void)
{
	int a[5],i;
	array_fill(a, 5); //a[0]의 주소값이 *a에 전달됨.
	for (i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}return 0;
}