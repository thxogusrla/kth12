#include<iostream>
#define pi 3.14
using namespace std;
class cshape
{
protected:
	int x, y;
	double radius;
public:
	cshape(int a = 0, int b = 0,double r = 0) : x(a), y(b), radius(r) {}
	void move(int a = 0, int b = 0) { x += a; y += b; }
	double getarea() {
		return pi * radius *radius;
	}
	virtual double getvolume() = 0;
};
class ccylinder :public cshape
{
private:
	double height;
public:
	ccylinder(int a, int b, double r, double d) :cshape(a, b,r),height(d) {}
	double getvolume() { 
		return (getarea() * height);
	}
};
class ccone :public cshape
{
private:
	double height;
public:
	ccone(int a, int b, double r, double d) : cshape(a, b,r), height(d) {}
	double getvolume() {return (getarea()*height)/3;
	}
};
int main()
{
	ccylinder c1(1, 1, 1, 1);
	ccone c2(2, 2, 2, 2);

	c1.move(1, 1);
	c2.move(2, 2);

	cout << "¿ø±âµÕ ºÎÇÇ : " << c1.getvolume() << endl;
	cout << "¿ø»Ô ºÎÇÇ :" << c2.getvolume() << endl;
}