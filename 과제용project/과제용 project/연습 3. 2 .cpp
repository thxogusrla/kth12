#include<iostream>
using namespace std;

int main()
{
	int var1 = 2, var2 = 3;
	int &ref1 = var1; // ���������� ����� ���ÿ� �ʱ�ȭ �����ش�.
	int &ref2 = var2;
	
	//ref1 = var1; ���� ������ ���� �ʱ�ȭ ���� ������ �߻�
	//ref2 = var2;
	int var3 = ref1; // var1�� var2�� ���� �ٲٴ� �����̴�.
	ref1 = ref2;
	ref2 = var3;
	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;
	return 0;
}