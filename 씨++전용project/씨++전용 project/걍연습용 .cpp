#include<iostream>
#include<stdlib.h>
using namespace std;
int &getarray(int *ary, int index) // �Լ� ��ȯ���� ���� �ΰ�
{
	int i;
	for (i = 0; i < index; i++)
	{
		ary[i] = rand() % 10;
	}
	
	return ary[index]; //���������� ��ȯ�ȴ�.
}
int main()
{
	int ary[5], i;
	
	getarray(ary, 5); //�Լ��� ȣ���ؼ� 0���� 4������ �ε��� ������ ���� �޾���
	for (i = 0; i < 5; i++)
	{
		cout <<"ary["<<i << "]" << " :" << ary[i] << endl;
	}
	return 0;
}