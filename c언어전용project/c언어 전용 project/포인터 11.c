#include<stdio.h>
void merge(int *a, int *b, int *c, int size);
int main()
{
	int a[4] = { 2,5,7,8 };
	int b[4] = { 1,3,4,6 };
	int c[8];
	merge(a, b, c, 5);
}
void merge(int *a, int *b, int *c, int size)
{
	int i,j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size ; j++)
		{
			if (a[i] < b[j]) c[i] = a[i];
			else c[i] = b[i];
		}
	}
}
void clean_array(int *a,int *b, int size) 
{
	int i, j,temp;
	int c_size;
	c_size = 2 * size;
	for (i = 0; i < size; i++)
	{
		for (j = i+1; j < size-1; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}//a[4] = 4,2,1,5,3
/*
2 5 7 8
1 3 4 6 À» ºñ±³
*/