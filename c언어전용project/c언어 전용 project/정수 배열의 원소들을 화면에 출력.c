#include<stdio.h>
void array_print(int *a, int size)
{
	int i;
	printf("a[] = {");
	for (i = 0; i < size; i++)
	{
		a[i] = i+1;
	}
	for (i = 0; i < size; i++)
	{
		if(i <4)
		printf(" %d, ",a[i]);
		else printf(" %d ",a[i]);
	}
	printf(" }");
}
int main()
{
	int a[5];
	int i;
	array_print(a, 5);

	return 0;
}