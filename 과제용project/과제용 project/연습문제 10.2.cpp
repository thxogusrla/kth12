#include<iostream>
using namespace std;
template<typename t>
t max(t *a, int size) // t size �϶� �� �ȵǴ°���?
{
	int i = 0;
	t maxpoint = 0;
	for (i = 0; i < size; i++)
	{
		if (maxpoint < a[i]) maxpoint = a[i];
	}
	return maxpoint;
}
int main()
{
	int ary[4] = { 4,5,2,7 };
	double ary2[5] = { 1.1,4.4,8.8,4.2,5.5 };
	cout << max(ary, 4) << endl; // t�� ó�� �������� Ÿ�Կ� ���� ���� ������ Ÿ�Ե� ������.
	cout << max(ary2, 5) << endl;
	return 0;
}