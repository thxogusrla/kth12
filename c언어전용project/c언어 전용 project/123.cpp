#include<iostream>
using namespace std;
int sum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum; //���������� ���ִ��ѵ� ���ϰ��� �״�� ����ȴ�.
}
int main()
{
	int a = 10, b = 5;
	cout << sum(a, b);
}