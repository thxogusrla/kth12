/*자기자신을 반환하게 되면 그 값은 남아있게된다. 그래서 값을 유지해주고 싶다면 자신을 리턴해주면 된다.*/
#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint sum(const cpoint &po)
	{
		return cpoint(x + po.x, y + po.y);
	}
	cpoint sub(const cpoint &po)
	{
		return cpoint(x - po.x, y - po.y);
	}
	cpoint invert()
	{
		return cpoint(-x, -y);
	}
	cpoint inc()
	{
		return cpoint(x+1, y + 1);
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend ostream &operator<<(ostream &out, const cpoint &po);
};
ostream &operator<<(ostream &out, const cpoint &po)
{
	out << "(" << po.x << "," << po.y << ")" << endl;
	return out;
}
int main()
{
	cpoint p1(1, 1);
	cpoint p2(2, 2);
	cpoint p3 = p1.sum(p2);
	cpoint p4 = p1.sub(p2);
	cpoint p5 = p1.invert();
	cpoint p6 = p1.inc();

	p1.print();
	p2.print();
	p3.print();
	p4.print();
	p5.print();
	p6.print();
}