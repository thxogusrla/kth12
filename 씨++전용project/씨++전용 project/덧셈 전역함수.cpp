#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint operator-(const cpoint &po1, const cpoint &po2);
	friend cpoint operator+(const cpoint &po1, const cpoint &po2);
	friend cpoint operator*(const cpoint &po1, int a);
};
cpoint operator-(const cpoint &po1,const cpoint &po2) { return cpoint(po1.x - po2.x, po1.y - po2.y); }
cpoint operator+(const cpoint &po1, const cpoint &po2) { return cpoint(po1.x + po2.x,po1.y + po2.y); }
cpoint operator*(const cpoint &po1, int a) { return cpoint(po1.x * a, po1.y * a); }
int main()
{
	cpoint p1(1, 2);
	cpoint p2(3, 4);
	cpoint p3 = p1 - p2;
	cpoint p4 = p3 + p3;
	cpoint p5 = p1 * 5; // p5 = p1.operator*(5)
	p3.print();
	p4.print();
	p5.print();
}