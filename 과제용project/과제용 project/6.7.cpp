#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	cpoint(const cpoint &po) { x = po.x; y = po.y; }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint sum(cpoint po1, cpoint po2);
	friend cpoint sub(cpoint po1, cpoint po2);
};
cpoint sum(cpoint po1, cpoint po2)
{
	cpoint a1;
	a1.x = po1.x + po2.x;
	a1.y = po1.y + po2.y;
	return a1;
}
cpoint sub(cpoint po1, cpoint po2)
{
	cpoint a2;
	a2.x = po1.x - po2.x;
	a2.y = po1.y - po2.y;
	return a2;
}

int main()
{
	cpoint p1(1, 2);
	cpoint p2(3, 4);
	cpoint p3 = sum(p1, p2);
	cpoint p4 = sub(p1, p2);
	p1.print();
	p2.print();
	p3.print();
	p4.print();
	return 0;
}