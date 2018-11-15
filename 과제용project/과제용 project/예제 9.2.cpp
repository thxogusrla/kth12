#include<iostream>
#define pi 3.14
using namespace std;
class ccircle
{
protected:
	int x, y;
	double radius;
public:
	ccircle(int a, int b, double r) : x(a), y(b), radius(r) {}
	double getarea() { return pi * radius * radius; }
	ccircle &operator=(const ccircle &cir) {
		cout << "ccircle 대입 연산자" << endl;
		x = cir.x; y = cir.y; radius = cir.radius;
		return *this;
	}
};
class csphere :public ccircle
{
private:
	int z;
public:
	csphere(int a, int b, int c, double r) :ccircle(a, b, r), z(c) {}
	double getarea() { return (4.0 / 3.0)*pi*radius*radius*radius; }
};
int main()
{
	csphere sph(1, 1, 1, 1);
	ccircle cir(2, 2, 100);
	cir = sph;
	cout << cir.getarea() << endl;
	return 0;
}