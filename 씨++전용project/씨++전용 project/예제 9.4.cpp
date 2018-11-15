#include<iostream>
#define pi 3.14
using namespace std;
class ccircle
{
protected:
	int x, y;
	double radius;
public:
	ccircle(int a = 0, int b = 0, double r = 0.0) :x(a), y(b), radius(r) {}
	double getarea() { return pi * radius *radius; }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
class cshpere :public ccircle
{
private:
	int z;
public:
	cshpere(int a, int b, int c, double r) :ccircle(a, b, r), z(c) {}
	double getarea() { return 4 * pi*radius*radius; }
	double getvolume() { return (4.0 / 3.0)*radius*radius*radius; }
	void print() { cout << "(" << x << "," << y << "," << z << ")" << endl; }
};
int main()
{
	int input;
	ccircle *cir; //������ ������ ������ ���� �� �� �ֳ�?

	cout << "�Է�(1 - ccircle // 2-cshpere) : ";
	cin >> input;

	if (input == 1) {
		cir = new ccircle(2, 2, 2);
		cout << cir->getarea();
	}
	else if (input == 2)
	{
		cir = new cshpere(2, 2, 2, 2);
		cout << cir->getarea() << endl << cir.getvolume(); //���⼭ �۵��Ǵ� ���� ccircle�� ��ü ��� �Լ��� ȣ��Ǳ� ������ ���ϴ� ���� �ȳ���.
	}
}