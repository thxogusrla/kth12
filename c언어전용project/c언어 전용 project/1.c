#include<stdio.h>
#define rows 5
#define cols 5
int main()
{
	int i,j ;
	char a[rows][cols] ;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++) scanf("%c",&a[i][j]);
	
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) printf("%c", a[i][j]);
	}
}