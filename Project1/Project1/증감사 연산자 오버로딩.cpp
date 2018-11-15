#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint &operator++() 
	{
		++x; ++y; return *this;
	}
	cpoint &operator-() 
	{
		x = -x; y = -y;
		return *this;
	}
	friend ostream &operator<<(ostream &out, cpoint po);
};
ostream &operator<<(ostream &out, cpoint po)
{
	out << "(" << po.x << "," << po.y << ")" << endl;
	return out;
}
int main()
{
	cpoint p1(1, 1);
	cout << p1;
	cpoint p2 = ++p1;
	cpoint p3 = -p1; //
	cout << p1;
	cout << p3;
	cout << p2;
	return 0;
}