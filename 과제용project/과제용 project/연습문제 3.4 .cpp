#include<iostream>
using namespace std;
void update(int var1, int &var2)
{
	var1 += var1; //var1 = var1 + var1
	var2 += var2; // var2 = var2 + var2
}
int main()
{
	int a = 1, b = 1;
	for (int i = 0; i < 5; i++)
		update(a, b);
	cout << "a = " << a << endl; //a�� ���� ���� �����̴ϱ� 
	cout << "b = " << b << endl; //������ ���� ������ �̷������Ƿ� 2 4 8 16 32.... 32�� ��µ�.
	return 0; 
}