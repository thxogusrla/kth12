#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a) : x(a), y(a) {} //�������ڰ� �������� �͸��� ����.
	//cpont(cpoint a) �� ���� �������ڰ� cpoint�� ���� �־���� ���� �� ����.
	void print() { cout << "(" << x << "," << y << ")" << endl; }

};
int main()
{
	cpoint p1(3);//������ p1
	cpoint p2 = cpoint(4); // ������ p2  cpoint p2(p3)
	cpoint p3 = 5; //==cpoint p3(5)
	p1.print();
	p2.print();
	p3.print();
	return 0;
}