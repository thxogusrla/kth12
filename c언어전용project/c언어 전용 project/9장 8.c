#include<stdio.h>
//1234 --> 1 2 3 4
int show_digit(int x) //x = 1234 
{
	if (x / 10 > 0)
		show_digit(x / 10); //(1234) -> (123) -> (12) -> (1)
	printf("%d ",x%10);     //-> 4 -> 3 -> 2 -> 1
}
/*
1 2 3 4 순으로 나왔단 말이지
*/
int main()
{
	int x;
	printf("정수를 입력하시오 :");
	scanf("%d",&x);
	show_digit(x);
}
/*
x/10
x%10
*/