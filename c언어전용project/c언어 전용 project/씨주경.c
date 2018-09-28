#include<stdio.h>
int main()
{
	
	int x=10;
	printf("%d\n",x);
	while (1)
	{
		printf("x의 값을 입력하시오 :");
		scanf("%d", &x);
		printf("%d\n", x);
	}
}