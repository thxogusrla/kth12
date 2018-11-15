#include<iostream>
#define pi 3.14
using namespace std;
class ccircle
{
protected:
	int x, y;
	double ra;
public:
	ccircle(int a = 0, int b = 0, double r = 0) :x(a), y(b), ra(r) {}
	double getarea() { return pi * ra * ra; }
};
class csphere :public ccircle
{
private:
	int z;
public:
	csphere(int a, int b, int c, double r) :ccircle(a, b, r), z(c) {}
	double getarea() { return 4 * pi*ra*ra; }
	double getvolume() { return (4.0*3.0)*pi*ra*ra*ra; }
};
int main()
{
	csphere sph(1, 1, 1, 1);
	ccircle *cir = &sph;
	ccircle &cir1 = sph;
	cout << "���� : " << cir->getarea() << endl; //���⼭ ȣ��Ǳ� �ٶ�� ���� csphere�� getarea()�� ȣ��Ǳ� �ٶ����� ccircle�� �Լ��� ȣ���
	cout << "cir1.sph�� ����:" << cir1.getarea() << endl;
	//cout << "���� : " << cir->getvolume() << endl;
}