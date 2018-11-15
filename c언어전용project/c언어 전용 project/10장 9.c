#include<stdio.h>
#define size 5
int main()
{
	int stu[size],i,j;
	int temp;
	printf("%d 명 학생의 점수를 입력하시오 :\n",size);
	for (i = 0; i < size; i++)
	{
		printf("%d번학생의 점수 = ",i+1);
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
		printf("%d등은 %d점수 입니다.\n",i+1,stu[i]);
	}
	return 0;
}