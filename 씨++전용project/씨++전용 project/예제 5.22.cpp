#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	static int count;
public:
	cpoint(int a, int b) :x(a), y(b) { count++; }
	~cpoint() { count--; }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	static int getcount() { return count; }
};

int cpoint::count = 0; //Ŭ�������� statice�� �Լ������� ������ ����.

int main()
{
	cpoint p1(1, 2);
	cpoint *p2 = new cpoint(3, 4);
	cout << cpoint::getcount() << endl; // Ŭ���������� getcount ����
	cout << p1.getcount() << endl; //��ü�� ���� static �Լ� ����
}