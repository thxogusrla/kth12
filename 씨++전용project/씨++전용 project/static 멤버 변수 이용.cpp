#include<iostream>
using namespace std;
class cpoint
{
private :
	int x, y;
	static int count; //Ŭ���� �ȿ����� ���������� �����Լ��ȿ��� Ŭ���� ��� ������ ����� ��ü�� ����Ѵٴ� ���̴�.
public:
	cpoint(int a) :x(a) { count++; }
	cpoint(int a, int b) : x(a), y(b) { count++; }
	void print() { cout << "count = " << count << endl; }
};
int cpoint::count = 0;
int main()g
{
	cpoint a(1);
	a.print();//1

	cpoint b(1, 2);
	b.print();//2

	cpoint c(5);
	c.print();//3 ����� �Ǿ�� ��.
}