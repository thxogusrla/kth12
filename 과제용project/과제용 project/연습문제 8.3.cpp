#include<iostream>
#define pi 3.14
using namespace std;
class cpoint
{
protected:
	int x, y;
public:
	cpoint(int a=0, int b=0):x(a),y(b) {
		cout << "처음 좌표는 :" << "(" << x << "," << y << ")" << endl;
	}
	void move(int c, int d) { x = x + c; y = y + d;
	}
	void drow() 
	{
		cout << "좌표 이동->" << "(" << x << "," << y << ")" << endl;
	} 
};
class ccircle : public cpoint
{
private:
	int x, y;
	double radius;
public:
	ccircle(int a, int b, double r) :x(a),y(b), radius(r) { cout << "첫 좌표 = " << "(" << ccircle::x << "," << ccircle::y << ")" << endl; }
	void drow() 
	{
		cout << "이동 후 ->" << "(" << x << "," << y << ")" << endl;
		cout << "반지름 =" << radius << endl;
		cout << "원의 면적 = " << getarea() << endl;
	}
	void move(int c, int d) { x = x + c; y = y + d; }
	double getarea() { return pi * radius * radius; }
};
int main()
{
	cpoint p1;
	p1.move(1, 1);
	p1.drow();
	ccircle p2(1,1,5);
	p2.move(2, 2);
	p2.ccircle::drow();
	return 0;
}