#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	static int count;
public:
	cpoint(int a, int b) :x(a), y(b) { count++; }
	void move(int a, int b);
	void print();
};
int cpoint::count = 0;
void cpoint:: move(int a, int b)
{
	count++;
	x += a; y += b;
	
}
void cpoint::print()
{
	if (count == 1)
		cout << "이동전 :" << "(" << x << "," << y << ")" << endl;
	else if (count == 2)
		cout << "이동후 :" << "(" << x << "," << y << ")" << endl;
}
int main()
{
	cpoint p1(1, 2);
	p1.print();
	p1.move(3, 4);
	p1.print();
}