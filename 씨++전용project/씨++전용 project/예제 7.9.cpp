#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0): x(a), y(b) {}
	//cpoint &operator++() { x++; y++; return *this; } //전위 연산자 오버로딩..
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
	return po; // p1이 참조가 되면서 po와 같은 것이 되었어. 그리고 po를 반환해주었으니 p1도 값이 바껴서 나오지.
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