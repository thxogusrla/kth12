#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a, int b): x(a),y(b) {}
	cpoint(const cpoint &po) { x = po.x; y = po.y; } //복사 생성자
	cpoint(const cpoint &po, int a) { x = po.x * a; y = po.y * a; } //복사생성자.
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 2);
	cpoint p2(p1);
	cpoint p3(p1, 3);
	
	p1.print();
	p2.print();
	p3.print();
}