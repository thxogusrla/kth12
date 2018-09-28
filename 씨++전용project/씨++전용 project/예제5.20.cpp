#include<iostream>
using namespace std;
class ccircle
{
public:
	class cpoint
	{
	private:
		int x, y;
	public:
		cpoint(int a = 0, int b = 0) :x(a), y(b) {}
		void move(int a, int b);
		void print();
	};
private: //ccircle private ����
	cpoint center;
	double radius;
public:
	ccircle(int a, int b, double r) : radius(r) { center.move(a, b); }
	void print() {
		center.print(); //cpoint ��ü�� ����Լ��� �̿�.
		cout << "������ : " << radius << endl;
	} 
};
void ccircle::cpoint::move(int a, int b)//��Ŭ�Լ� �ȿ� �ִ� cpoint�Լ��� move ��� �Լ��� ����ϰڴ�.
{
	x += a; y += b;
}
void ccircle::cpoint::print() { cout << "�߽� : (" << x << "," << y << ")" << endl; }
int main()
{
	ccircle cir(3, 4, 5); //cir�� ccircle Ŭ������ ������ �����.
	cir.print();
	ccircle::cpoint p2(100, 200);
	p2.print();
	return 0;
}