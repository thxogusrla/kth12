#include<iostream>
using namespace std;
void sum_x(int a[], int n, int &sum, int &x)
{
	int i;
	sum = 0;
	x = 1;
	for (i = 0; i < n; i++)
		sum += a[i];
	for (i = 0; i < n; i++)
		x *= a[i];	
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int sum, x; //�հ� ���� ���� ������ ����
	sum_x(a, 5, sum, x); //sum�� x�� ���������� �Ǿ� ���� ������.
	cout << sum << endl; //�迭 ������ ��ü�� ������ ���� ��µ�.
	cout << x << endl; // �迭 ������ ��ü�� ������ ���� ��µ�.
	return 0;
}