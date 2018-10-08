#include<iostream>
using namespace std;
class cpoint //a.operator(p1) 이 가능하도록 연산자 오버로딩을 써라
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint operator+(const cpoint &po) { return cpoint(x + po.x, y + po.y); } //p1.operator(p2)
	cpoint operator+(int a) { return cpoint(x + a, y + a); } //p1.operator(a)
	friend cpoint operator+(int a, const cpoint &p1);
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
cpoint operator+(int a, const cpoint &p1) //a.operator(p1) 으로 사용할 수 있도록 연산자 오버로딩을 만들어줌.
{
	return cpoint(a + p1.x, a + p1.y);
}
int main()
{
	cpoint p1(1, 2);
	cpoint p2 = 5 + p1; // p2 = a operator+(p1)

	p2.print();
}