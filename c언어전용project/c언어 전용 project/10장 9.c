#include<stdio.h>
#define size 5
int main()
{
	int stu[size],i,j;
	int temp;
	printf("%d �� �л��� ������ �Է��Ͻÿ� :\n",size);
	for (i = 0; i < size; i++)
	{
		printf("%d���л��� ���� = ",i+1);
		scanf("%d",&stu[i]);
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++) {
			if (stu[i] > stu[j])
			{
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%d���� %d���� �Դϴ�.\n",i+1,stu[i]);
	}
	return 0;
}