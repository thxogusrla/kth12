#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	cpoint(const cpoint &po) { x = po.x; y = po.y; } //복사 생성자가 없으면 디폴트 복사 생성자가 호출되지만 복사 생성자가 있으면 그 뒤론 디폴트 복사 생성자가 사라짐.
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1;
	cpoint p2(p1);
	p1.print();
	p2.print();
	return 0;
}