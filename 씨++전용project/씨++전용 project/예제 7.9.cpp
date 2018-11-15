#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0): x(a), y(b) {}
	//cpoint &operator++() { x++; y++; return *this; } //���� ������ �����ε�..
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint &operator++( cpoint &po );
	friend ostream &operator<<(ostream &out, const cpoint &po);
};
ostream &operator<<(ostream &out, const cpoint &po)
{
	out << "(" << po.x << "," << po.y << ")" << endl;
	return out;
}

cpoint &operator++(cpoint &po)//po = p1;
{
	++po.x; ++po.y;
	return po; // p1�� ������ �Ǹ鼭 po�� ���� ���� �Ǿ���. �׸��� po�� ��ȯ���־����� p1�� ���� �ٲ��� ������.
}

int main()
{
	cpoint p1(1, 2);
	p1.print();
	cpoint p2 = ++p1;
	p1.print();
	p2.print();
	++p1;
	p1.print();
	cout << p1 << endl;
}