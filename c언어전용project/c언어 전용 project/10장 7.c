#include<stdio.h>
int main()
{
	int i, a[3][10] = {0};
	int value;
	for (i = 1; i < 11; i++)
	{
		a[0][i] = i;
		a[1][i] = i * i;
		a[2][i] = i * i*i;
	}
	printf("정수의 값을 입력하시오:");
	scanf("%d", &value);
	for (i = 0; i < 10; i++)
	{
		if (value == a[2][i]) printf("%d의 세제곱근은 :%d입니다.",value,i);
	}
	//순차 탐색하는 방법에 대해 공부함.
}