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
	printf("�μ��� �Է� �Ͻÿ� :");
	scanf("%d %d",&a,&b);
	printf("%d\n",plus(a,b));
	printf("%d\n",minus(a,b));
	
}