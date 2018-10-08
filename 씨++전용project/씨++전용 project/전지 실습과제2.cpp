#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint &operator--() { x--; y--; return *this; }
	cpoint operator--(int a) {
		cpoint temp = *this;
		x--; y--; return temp;
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{//------------------>5 4 3 2 1 Ãâ·Â
	cpoint p1(5,5);
	p1.print();
	cpoint p2 = (--p1)--; //4 4
	cpoint p3 = p1--; //3 3
	cpoint p4 = p1--; //2 2
	cpoint p5 = p1;

	p2.print();
	p3.print();
	p4.print();
	p5.print();
}