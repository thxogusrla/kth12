#include<iostream>
using namespace std;
class cpoint
{
private: int x, y;
public:
	cpoint(int a = 0, int b = 0):x(a),y(b) {}
	//cpoint &operator++() { x++; y++; return *this; } //&�� ������ �Լ��� ��������ó�� ���Ǵ±���?!
	cpoint&operator++(int a) 
	{
		x++; y++; return *this;
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint &operator++(cpoint &po);
};
cpoint &operator++(cpoint &po) //���� �Լ����� *this�� ������..
{
	po.x++; po.y++; return po; //this�� ��������� �ȿ����� ��� �����ϴ�.
}

int main()
{
	cpoint p1(1, 1);
	cpoint p2 = ++(++p1);
	cpoint f1(1, 1);
	cpoint f2 = (f1++)++;
	p1.print();
	p2.print();
	f1.print();
	f2.print();
}