/* ������ ���� 5���� �������� �Ҵ�ް� ���� �ش������ �ε��� ������ ä��� .*/
#include<iostream>
using namespace std;
int main()
{
	int *a = new int[5] , i; //
	for (i = 0; i < 5; i++)
	{
		a[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		cout << "a[" << i << "]" << "=" << a[i] << endl;
	}
	delete[]a; //���� �޸� ������ ���� ���� �޸� ������ ���� ��.
}