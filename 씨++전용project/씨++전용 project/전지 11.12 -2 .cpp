#include<iostream>
using namespace std;

class crect
{
protected:
	int x, y;
public:
	crect(int a = 0, int b = 0) :x(a), y(b) {}
	virtual double getarea() { return x * y; } //�����Լ�.
};

class ctri : public crect
{
public:
	ctri(int a = 0, int b = 0) : crect(a,b){}
	double getarea() { return crect::getarea()/2; }
};

int main()
{
	crect c1(2, 2);
	ctri c2(4, 4);
	crect *p = new ctri(4, 4);

	cout << "�簢���� ���� : " << c1.getarea() << endl;
	cout << "�ﰢ���� ���� : " << c2.getarea() << endl;
	cout << "������ ��� �ﰢ���� ���� : " << p->getarea() << endl;
}