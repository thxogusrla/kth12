#include<iostream>
using namespace std;
class cpoint {
private:
	int x, y;
public :
	cpoint(int a, int b) { x = a; y = b; } //�����ڴ� private ������ �ִ� �Ӽ����� �ʱ�ȭ �����ֱ� ���� �����.
	cpoint(int a) { x = a; y = 0; } //������ �����ε�
	void print() { cout << x << " " << y << endl; }
};
int main(void)
{
	cpoint po = { 1,2 }; //cpoint po = {1 , 2} �� x�� y�� ���� 1,2 �� �ʱ�ȭ ��.
	po.print();
	cpoint p2(5); // x= 5 �� y = 0�� �ʱ�ȭ ��.
	p2.print();
	return 0;
}
