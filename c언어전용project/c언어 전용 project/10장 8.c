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
double po(int a[]) //표준편차 구하는 함수 먼저 데이터 - 평균 값.
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
		printf("%d번째 데이터 입력:",i);
		scanf("%d",&a[i]);
	}
	printf("평균의 값은 %lf입니다.",mean(a));
	printf("표준편차의 값은 %lf입니다.",po(a));
	return 0;
}
