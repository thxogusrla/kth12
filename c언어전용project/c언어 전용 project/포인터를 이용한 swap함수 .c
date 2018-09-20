#include<stdio.h>
void swap(int *x, int *y) //매개변수로 포인터변수를 받음.
{
	int temp = *x; //임의의 변수 temp에 포인터 변수 x가 가리키는 곳의 값을 저장함. 즉 
	*x = *y; //그리고 x가 가리키는 곳의 값을 y가 가리키는 곳의 값으로 저장함.
	*y = temp; //y가 가리키는곳의 값을 temp로 저장함.
}
int main()
{
	int a, b;
	printf("교환할 두 수를 입력하시오 :");
	scanf("%d  %d",&a,&b); 
	swap(&a, &b); //변수의 주소를 swap 함수에 전달int *p = &a;
	printf("교환후 두 수 : %d   %d\n", a, b);
}