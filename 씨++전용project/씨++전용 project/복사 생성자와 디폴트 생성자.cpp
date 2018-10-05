#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	cpoint(const cpoint &po) { x = po.x; y = po.y; } //���� �����ڰ� ������ ����Ʈ ���� �����ڰ� ȣ������� ���� �����ڰ� ������ �� �ڷ� ����Ʈ ���� �����ڰ� �����.
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