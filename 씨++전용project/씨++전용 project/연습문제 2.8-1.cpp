#include<iostream>
using namespace std;
typedef int BOOL;
int main()
{
	BOOL bvar1; //���������� ����ϰ�
	bool bvar2; //true of faulse �� ���.

	bvar1 = (1 < 2) + (2 < 3);
	bvar2 = (1 < 2) + (2 < 3);
	cout << "bvar1 = " << bvar1 << endl;
	cout << "bvar2 = " << bvar2 << endl;
	printf("%d",(1>5)); //�ε�ȣ ǥ�ð� ���ٸ� ���̳� �����̳ĸ� ������ ����.
}