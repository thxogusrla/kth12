#include<iostream>
using namespace std;
int main()
{
	int var1 = 1;
	int var2 = 2;
	const int *p1;
	//int *const p2;
	int *const p2 = &var1;
	p1 = &var1;
	p1 = &var2;//p1�� ����Ű�� ������ �ּҸ� �ٲ� �� �ִ�. 
	//*p1 = 5; //������ p1�� ����Ű�� ���� ������ ���� ���� ��ų ���� ����.
	var2 = 4;
	*p2 = 3;
	//p2 = &var2;
	printf("var1 ");

}