#include<stdio.h>
int main()
{
	int i, a[3][10] = {0};
	int value;
	for (i = 1; i < 11; i++)
	{
		a[0][i] = i;
		a[1][i] = i * i;
		a[2][i] = i * i*i;
	}
	printf("������ ���� �Է��Ͻÿ�:");
	scanf("%d", &value);
	for (i = 0; i < 10; i++)
	{
		if (value == a[2][i]) printf("%d�� ���������� :%d�Դϴ�.",value,i);
	}
	//���� Ž���ϴ� ����� ���� ������.
}