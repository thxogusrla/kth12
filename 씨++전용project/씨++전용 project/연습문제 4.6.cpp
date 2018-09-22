#include<iostream>
using namespace std;
class cpoint
{	
private:
	int x, y;
public:
	cpoint() { x = 0; y = 0; }
	cpoint(int a) { x = a; y = a; }
	cpoint(int a, int b) { x = a; y = b; }
	cpoint(int a, int b, int c) { x = a + b + c; y = a * b*c; }
	void print() { cout << "(" << x << " " << y << ")" << endl; }
};
int main(void)
{
	cpoint p1;
	cpoint p2(1);
	cpoint p3(2, 3);
	cpoint p4(4, 5, 6);
	p1.print();
	p2.print();
	p3.print();
	p4.print();
}