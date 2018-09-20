#include<stdio.h>
/*
void swap(int &a,int &b)
{
	int temp ;
	temp = a;
	a = b;
	b = temp;
}
*/
struct point {
	int x, y;
};
void swap(struct point &a, struct point &b)
{
	struct point temp = a;
	a = b;
	b = temp;
}
int main()
{
	struct point A = { 1,2 };
	struct point B = { 3, 4 };
	printf("%d  %d\n", A.x,A.y);
	printf("%d  %d\n", B.x, B.y);
	printf("º¯°æ ÈÄ \n");
	swap(A, B);
	printf("%d  %d\n", A.x, A.y);
	printf("%d  %d\n", B.x, B.y);

	return 0;
}