#include<iostream>
using namespace std;
int main(void)
{
	int var1 = 2, var2 = 3;//var1�� ��������ÿ� 2�� ��Ÿ���� var2�� ��������ÿ� 3�� ��Ÿ����.
	int &ref1 = var1;// var1�� ref1�� �����Ѵ�.
	int &ref2 = var2;// var2�� ref2�� �����Ѵ�.
	int var3 = ref1;// var3�� ����� ���ÿ� ref1�� ����.
	ref1 = ref2;// ref2�� ���� ref1�� ���� �϶�.
	ref2 = var3;

	cout << "var1 :" << var1 << endl;
	cout << "var2 :" << var2 << endl;

	return 0;
}

