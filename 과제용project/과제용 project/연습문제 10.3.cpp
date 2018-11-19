#include<iostream>
using namespace std;
template<typename t>
class cpoint
{
protected:
	t x, y;
public:
	cpoint(int a, int b) :x(a), y(b) {}
	cpoint<t>operator+(const cpoint &po) { return cpoint<t>(x + po.x, y + po.y); }
template <typename t>
	friend ostream &operator<<(ostream &out, cpoint<t> &po);
};
template <typename t>
ostream &operator<<(ostream &out, cpoint<t> &po)
{
	out << "(" << po.x << "," << po.y << ")";
	return out;
}
int main()
{
	cpoint<int> a(1, 2);
	cpoint<int> b(3, 4);
	cpoint<int> c = a + b;

	cout << a << "+"<<b << "=" << c << endl;
	
	cpoint<double> d(1.2, 3.4);
	cpoint<double> e(5.6, 7.8);
	cpoint<double> f = d + e;
	
	cout << d << "+" << e << "=" << f << endl;

	return 0;
}