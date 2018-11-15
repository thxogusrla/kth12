#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint(const cpoint &po) 
	{
		x = po.x; y = po.y;
	}
	cpoint(const cpoint &p1, const cpoint &p2)
	{
		x = p1.x + p2.x; y = p1.y + p2.y;
	}
	cpoint operator+(const cpoint &po)
	{
		return cpoint(x + po.x, y + po.y);
	}
	friend cpoint operator+(const cpoint &p1, const cpoint &p2);
	friend ostream &operator<<(ostream &out, const cpoint &po);
};
cpoint operator+(const cpoint &p1, const cpoint &p2)
{
	return cpoint(p1.x + p2.x, p1.y + p2.y);
}
ostream &operator<<(ostream &out, const cpoint &po) //po의 값은 변하지 않고 참조를 해준다.
{
	cout << "(" << po.x << "," << po.y << ")" ; return out;
}
int main()
{
	cpoint p1(2, 2);
	cpoint p2(3, 3);
	cpoint p3 = p1.operator+(p2);
	cpoint p4 = operator+(p1, p2);
	cpoint p5 = p1;
	cpoint p6(p1, p2);
	cpoint p7 = { p1,p2 };

	cout << p1 << " " << p2 << endl << p3 << " " << p4 << endl << p5 << endl << p6 << " " << p7 << endl;
}