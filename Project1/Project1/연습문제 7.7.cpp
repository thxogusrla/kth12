#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint &operator++() { x++; y++; return *this; }
	cpoint &operator++(int a) { cpoint temp = *this; x++; y++; return temp; }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 1);
	cpoint f1(1, 1);
	cpoint p2 = (++p1)++; // p2 = 2 2 p1 = 3 3 
	cpoint f2 = ++(f1++); // f2 = 3 3 f1 = 3 3
	p1.print();
	p2.print();
	f1.print();
	f2.print();
	return 0;
}