#include<iostream>
using namespace std;
class cpointrrrivate:
	double x, y;
public:
	cpoint():x(0),y(0) {}
	void setxy(double a , double b)
	{
		x = a; y = b;
	}
	cpoint &print() { cout << "(" << x << "," << y << ")" << endl; return *this; }
	cpoint &move(double a, double b) //�� �ڽ��� ��ȯ�϶�.
	{
		x = x + a; y = y + b;
		return *this;
	}
	cpoint &div(double a, double b)
	{
		x = x / a; y = y / b;
		return *this;
	}
};
int main()
{
	cpoint p1;
	p1.setxy(17, 3);
	cout << "���� �� :";
	p1.print();

	p1.move(3, 7);
	cout << "ù��° ���� �� :";
	p1.print();

	p1.div(5, 5);
	cout << "�ι�° ���� �� :";
	p1.print();
	cout << "3,4��° ����(�ѹ���)" << endl;

	p1.move(3, 7).print().div(5, 5).print();
	return 0;
}