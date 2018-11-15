#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint &operator=(const cpoint &po)
	{
		x = po.x; y = po.y; return *this;
	}
	void print() { cout << x << y; }
};
int main()
{
	cpoint p1(1, 1);
	cpoint p2;
	cpoint p3;
	p2 = p1;
	p2.print();

}