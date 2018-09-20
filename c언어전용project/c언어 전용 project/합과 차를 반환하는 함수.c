#include<stdio.h>
void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}
int main(void)
{
	int x, y;
	int sum , diff;
	printf("두개의 값을 입력 하시오 :");
	scanf("%d  %d", &x,&y);
	get_sum_diff(x, y, &sum, &diff); //매개변수의 합과 차는 포인터변수이므로 주소값을 전달해주어야 함. int *p_sum = &sum
	printf("x와 y의 합은 : %d\n", sum);
	printf("x와 y의 차 : %d \n",diff);
	return 0;
}