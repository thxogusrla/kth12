#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	cpoint operator+(const cpoint &po) { return cpoint(x + po.x, y + po.y); }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint operator+(int a, cpoint &p1);
	friend cpoint operator-(const cpoint &p1, const cpoint &p2);
	friend cpoint operator-(const int a, const cpoint &p1);
};
cpoint operator+(int a, cpoint &p1) { return cpoint(a + p1.x, a + p1.y); }
cpoint operator -(const cpoint &p1, const cpoint &p2) { return cpoint(p1.x - p2.y, p1.y - p2.y); }
cpoint operator-(const int a, const cpoint &p1) { return cpoint(a - p1.x, a - p1.y); }
int main()
{
	cpoint p1(1, 2);
	cpoint p2(3, 4);
	cpoint p5(p1.operator+(p2)); //p1.operator+(p2) 와 같은 명시적인 형태로 덧셈 연산자를 할려면 멤버함수로 만들어야 가능함.
	cpoint p6(operator-(p1, p2));
	cpoint p7 = 5 + p1;
	cpoint p8 = 5 - p2;

	p5.print();
	p6.print();
	p7.print();
	p8.print();
}