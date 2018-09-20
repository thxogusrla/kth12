#include<stdio.h>
int plus(int x, int y)
{
	return x + y;
}
int minus(int x, int y)
{
	return x - y;
}
int main()
{
	int a, b;
	printf("두수를 입력 하시오 :");
	scanf("%d %d",&a,&b);
	printf("%d\n",plus(a,b));
	printf("%d\n",minus(a,b));
	
}