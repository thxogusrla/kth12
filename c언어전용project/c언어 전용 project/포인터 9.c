 #include<stdio.h>
int search(int *a, int size, int serch_value) 
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i] == serch_value) {
			printf("%d���� ����� ������ �����ϴ�.",i);
			return a[i];  //���� �ݾ����� ��ȯ�ϴ� ��.
		}
	}
}
int main()
{
	int i, a[5]; //�迭�� �̸��� ������ ó�� ���ȴ�.
	int serch_value;
	for (i = 0; i < 5; i++)
	{
		printf("%d���� ����� ������ �Է��Ͻÿ� :",i);
		scanf("%d",&a[i]);
	}
	printf("���� ���� �ݾ��� ����� ã�� ����? :");
	scanf("%d",&serch_value);

	printf("���� ������ %d�����Դϴ�.",search(a,5,serch_value)); //printf()�� ���� ��������� �״��� return a[i]�� �̷�����.
}