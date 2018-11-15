#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	cpoint &operator=(const cpoint &po) //복사생성자를 만들었자나.
	{
		x = po.x; y = po.y;
		return *this;
	}
	friend ostream &operator<<(ostream &out, const cpoint po);
};
ostream &operator<<(ostream &out, const cpoint po)
{
	out << "(" << po.x << "," << po.y << ")" << endl; 
	return out;
}
int main()
{
	cpoint p1(1, 1), p2(2, 2), p3(3, 3);
	p1 = p2;
	cout << p1;
	p1 = p2 = p3;
	cout << p1 << p2 << p3;
	return 0;
}