#include<iostream>
using namespace std;
struct x 
{
	x() { b++; }
	~x() { b--; cout << b << endl; }
	static int b;
};
int x::b; //�ʱ�ȭ �����ָ� �ڵ����� 0���� �ʱ�ȭ?
int main()
{
	{
		x x1, x2;
		cout << x::b << endl; 
	}//�Լ��� ������ �Ҹ��ڰ� ������ �Ǹ鼭  b�� �������.
	{
		x x[5]; //x[0],[1],[2],[3],[4] �� 5���� ��������鼭 b �� 5�� �ȴ�.
		cout << x[0].b << endl;
	}

}
