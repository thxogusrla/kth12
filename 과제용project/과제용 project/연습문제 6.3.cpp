#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint():x(0), y(0) {}
	cpoint(int a) : x(a), y(a) {}
	cpoint(int a, int b) : x(a), y(b) {}
	cpoint(const cpoint &po) { x = po.x; y = po.y; } //p3 ==po 참조에 의해 같은 변수가 됨.
	cpoint(int a, const cpoint &po) { x = po.x *a; y = po.y * a; }
	cpoint(const cpoint &po_1, const cpoint &po_2) { x = po_1.x + po_2.x; y = po_1.y + po_2.y; }
	void print();
};
void cpoint::print() { cout << "(" << x << "," << y << ")" << endl; }
int main()
{
	cpoint p1;
	cpoint p2(1);
	cpoint p3(2, 3);
	cpoint p4 = p3; //cpoint p4(p3)
	cpoint p5(2, p3);
	cpoint p6(p4, p5);
	p1.print();
	p2.print();
	p3.print();
	p4.print();
	p5.print();
	p6.print();
}