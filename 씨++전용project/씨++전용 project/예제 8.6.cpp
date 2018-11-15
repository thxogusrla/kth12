#include<iostream>
#define pi 3.14
using namespace std;
class ccircle 
{
protected:
	int x, y;
	double radius;
public:
	ccircle(int a, int b, double r) :x(a), y(b), radius(r) { cout << "ccircle 생성자" << endl; }
	~ccircle() { cout << "ccircle 소멸자" << endl; }
	double getarea() { return pi * radius * radius; } //원의 면적을 구하는 공식.
};
class csphere :public ccircle
{
private: int z;
public:
	csphere(int a, int b, double r, int c) :ccircle(a, b, r), z(c) { cout << "csphere 생성자" << endl; }
	~csphere() { cout << "csphere 소멸자" << endl; }
	double getvolume() { return(4.0/3.0) * pi * radius * radius; }
};
int main()
{
	csphere sph(1, 1, 1, 1);
	cout << sph.getarea() << endl;
	cout << sph.getvolume() << endl;
	return 0;
}