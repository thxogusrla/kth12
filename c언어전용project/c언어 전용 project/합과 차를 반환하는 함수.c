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
	printf("�ΰ��� ���� �Է� �Ͻÿ� :");
	scanf("%d  %d", &x,&y);
	get_sum_diff(x, y, &sum, &diff); //�Ű������� �հ� ���� �����ͺ����̹Ƿ� �ּҰ��� �������־�� ��. int *p_sum = &sum
	printf("x�� y�� ���� : %d\n", sum);
	printf("x�� y�� �� : %d \n",diff);
	return 0;
}