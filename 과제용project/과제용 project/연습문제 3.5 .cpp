#include<iostream>
#include<stdlib.h>
using namespace std;
void sum_multi(int a[],int n, int &sum, int &multi) //������ �迭�� ũ�⸦ ������. sum�� multi�� ���������� ������ش�.
{
	sum = 0;
	multi = 1;
	for (int i = 0; i < n; i++)
		sum += a[i];
	for (int i = 0; i < n; i++)
		multi *= a[i];
}
int main()
{
	int a[5];
	int sum, multi;
	for (int i = 0; i < 5; i++)
	{
		a[i] = (rand() % 10) + 1; // ���� ��ü�� ���� 0�� ������ ���� �����ϱ� ���� 1�� ����.
	}
	cout << "a[5] = {";
	for (int i = 0; i < 5; i++)
		cout << a[i] << " " ; //�迭 a�� � ������ ����ִ��� ������ش�.
	cout << "}" << endl;
	sum_multi(a, 5, sum, multi); //������ ���� ȣ���� �Ͼ�� sum�� multi�� ���������� ���� ���� ������ ���� ����ȴ�.
	cout << sum << endl;
	cout << multi << endl;
}