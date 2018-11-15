#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0):x(a),y(b) {}
	cpoint operator+(const cpoint &po) { return cpoint(x + po.x, y + po.y); }
//	friend cpoint operator+(const cpoint &p1, const cpoint &p2);
	cpoint operator-(const cpoint &po) { return cpoint(x - po.x, y - po.y); }
	friend cpoint operator-(const cpoint &p1, const cpoint &p2);
	cpoint(const cpoint &p1, const cpoint &p2) { x = p1.x + p2.x; y = p1.y + p2.y; }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
cpoint operator-(const cpoint &p1, const cpoint &p2)
{
	return cpoint(p1.x - p2.x, p1.y - p2.y);
}
int main()
{
	cpoint p1(1, 1);
	cpoint p2(2, 2);
	cpoint p3(p1, p2);
	cpoint p4 = p1.operator+(p2);
	cpoint p5 = operator-(p1, p2);
	cpoint p6 (p1 + p2);

	p3.print();
	p4.print();
	p5.print();
	p6.print();
}