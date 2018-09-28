#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	static int count;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) { count++; } //�����ڿ����� statice ��� ������ �����ֳ�����
	~cpoint() { count--; } //�Ҹ��ڴ� �Լ��������� ȣ���� ���ݾ�.
	void print() { cout << "("<< x << "," << y << ")" << endl; }
	static int getcount() { return count; } //static ��� �Լ��� statice ��� �������� ����� �� �ִ�.
};
int cpoint::count = 0; //��������� �ʱ�ȭ�� �����־�� �����ȴ�.
int main()
{
	cpoint p1(1,2);
	cpoint p3(3, 5);
	cpoint *p2 = new cpoint(3, 4);  //�̰͵� �����ڶ� �Ҽ��ֳ�?
	p1.print();
	p2->print();
	cout << "count :" << cpoint::getcount() << endl;
	delete p2;
	cout << "count :" << p1.getcount() << endl;
	cout << "count :" << p3.getcount() << endl;

	return 0;
}