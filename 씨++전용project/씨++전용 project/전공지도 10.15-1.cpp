#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint sum(const cpoint &po) { return cpoint(x + po.x, y + po.y); }
	cpoint sub(const cpoint &po) { return cpoint(x - po.x, y - po.y); }
	cpoint sqr() { return cpoint(x*x, y*y); }
	cpoint invert() { return cpoint(-x,-y); }
	cpoint inc() { return cpoint(x+1,y+1); }
	cpoint operator+(const cpoint &po) { return cpoint(x + po.x, y + po.y); }
	cpoint operator-(const cpoint &po) { return cpoint(x - po.x, y - po.y); }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 1);
	cpoint p2(4, 4);
	cpoint a1 = p1 + p2;
	cpoint a2 = p1 - p2; //*this->p1.operator-(p2)
	cpoint p3 = p1.sum(p2); //디폴트 복사생성자가 나타남.
	cpoint p4 = p1.sub(p2);
	cpoint p5 = p4.sqr();
	cpoint p6 = p5.invert();
	cpoint p7 = p1.inc();
	cpoint p8 = p6.sum(p3).invert().inc(); //임시객체를 이용해서 연속적으로 호출.

	p1.print();
	p2.print();
	p3.print();
	p4.print();
	p5.print();
	p6.print();
	p7.print();
	p8.print();
	a1.print();
	a2.print();
	return 0;
}