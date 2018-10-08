#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0):x(a),y(b) {}
	cpoint &operator++(){
		x++; y++; return *this;
	}
	cpoint operator++(int a)
	{
		cpoint temp = *this;
		x++; y++; return temp;
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 1);
	cpoint p2 = (++p1)++;
	cpoint p3 = (p1++);
	cpoint p4 = p1;
	p1.print(); // 4 4
	p2.print(); // 2 2
	p3.print(); // 3 3
	p4.print(); // 4 4
}