/*연산자 오버로딩을 이용한 사칙연산 만들기.*/
#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint operator+(const cpoint &p1, const cpoint &p2);//operator+(p1,p2);
	friend cpoint operator-(const cpoint &p1, const cpoint &p2);
	friend cpoint operator*(const cpoint &p1, const cpoint &p2);
	friend cpoint operator/(const cpoint &p1, const cpoint &p2);
};
cpoint operator+(const cpoint &p1, const cpoint &p2) { return cpoint(p1.x + p2.x, p1.y + p2.y); }
cpoint operator-(const cpoint &p1, const cpoint &p2) { return cpoint(p1.x - p2.x, p1.y - p2.y); }
cpoint operator*(const cpoint &p1, const cpoint &p2) { return cpoint(p1.x * p2.x, p1.y * p2.y); }
cpoint operator/(const cpoint &p1, const cpoint &p2) { return cpoint(p1.x / p2.x, p1.y / p2.y); }
int main()
{
	cpoint p1(1, 1);
	cpoint p2(2, 2);
	cpoint p3 = p1 + p2;
	cpoint p4 = p1 - p2;
	cpoint p5 = p1 * p2;
	cpoint p6 = p1 / p2;

	p3.print();
	p4.print();
	p5.print();
	p6.print();
}