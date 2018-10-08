#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	friend cpoint operator+(const cpoint &p1,const cpoint &p2);
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
cpoint operator+(const cpoint &p1, const cpoint &p2)  //
{
	return cpoint(p1.x + p2.x, p1.y + p2.y);
}
int main()
{
	cpoint p1(1, 1);
	cpoint p2(2, 2);
	cpoint p3 (p1 + p2); //p3 = p1 + p2; -> p3 = p1.operator+(p2)
	cpoint p4(operator+(p1,p2));
	
	p3.print();
	p4.print();
	return 0;
}