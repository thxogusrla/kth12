#include<iostream>
using namespace std;
template <typename T>
T sum(T a, T b)
{
	T c = a + b;
	return c; 
}
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a, int b) :x(a), y(b) {}
	cpoint operator+(const cpoint &po) { return cpoint(x + po.x, y + po.y); }
	void print() { cout << "(" << x << "," << y <<")" << endl; }
};
int main()
{
	cpoint p1(1, 2), p2(3, 4);
	cpoint p3 = sum(p1, p2);
	p3.print();
	return 0;
}