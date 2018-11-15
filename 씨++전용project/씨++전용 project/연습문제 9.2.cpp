#include<iostream>
using namespace std;
class cpoint;
class ccircle
{
private:
	int x, y;
	double r;
public:
	ccircle(int a, int b, int c) : x(a), y(b), r(c) {}
	int getx() { return x; } 
	int gety() { return y; }
	double getarea() { return 3.14*r*r; }
};
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a , int b):x(a),y(b) {}
	cpoint(ccircle &cir) { x = cir.getx(); y = cir.gety(); }
	cpoint(const cpoint &po) { x = po.x; y = po.y; }
	cpoint &operator=(const ccircle &po) {}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 1);
	ccircle p2(3, 3, 3);
	cpoint p3 = p2;
	cpoint p4 = p1;
	cout << "p2¿øÀÇ ³ÐÀÌ :" << p2.getarea() << endl;
	p3.print();
	p4.print();
	return 0;
}