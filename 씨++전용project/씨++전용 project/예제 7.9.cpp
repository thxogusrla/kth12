#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0): x(a), y(b) {}
	cpoint &operator++() { x++; y++; return *this; } //전위 연산자 오버로딩..
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 2);
	p1.print();
	cpoint p2 = ++p1;
	p1.print();
	p2.print();
}