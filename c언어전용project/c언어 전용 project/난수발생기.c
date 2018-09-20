#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i;
	int a, b, c;
	int j[10] = { 0 };
	srand((unsigned)time(NULL));
	for (i = 0 ; i < 10; i++)
	{
		j[i] = rand() % 30;
	}
	printf("j[10] = {");
	for (i = 0; i < 10; i++)
	{
		printf("%3d",j[i]);
	}
	printf("\n");
	printf(" ___\b\b\b }");
	scanf("%d %d %d",&a,&b,&c);

}