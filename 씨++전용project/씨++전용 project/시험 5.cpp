#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:


	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	friend cpoint &operator++(cpoint &po);
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
cpoint &operator++(cpoint &po)
{
	po.x++; po.y++;
	return po;
}
int main()
{
	cpoint p1(1, 1);
	cpoint p2 = ++p1;
	p1.print();
	p2.print();
	return 0;
}