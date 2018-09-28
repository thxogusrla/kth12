#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void array_ary(int *ary_1, int *ary_2 , int size)
{
	int i;
	for (i = 0; i < size; i++)
		ary_2[i] = ary_1[i];
}

int main()
{
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int B[10],i;
	array_ary(A, B, 10);
	for (i = 0; i < 10; i++)
		printf("B[%d] = %d  \n",i , B[i]);
}