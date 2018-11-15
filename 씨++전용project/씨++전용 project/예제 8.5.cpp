#include<iostream>
#define pi 3.14
using namespace std;
class ccircle
{
protected:
	int x, y;
	double radius;
public:
	ccircle(int a, int b, double r) :x(a), y(b), radius(r) {}
	double getarea() { return pi * radius*radius; }
};
class csphere :public ccircle //그대로 영역이 유지된다. csphere 가 ccircle에게 상속받았음. 
{
private:
	int z;
public:
	csphere(int a, int b, int c, double r) :ccircle(a,b,r),z(c) { }
	//csphere(int a, int b, int c, double r) { x = a; y = b; radius = r; z = c; } 생성자가 하나라도 만들어지면 디폴트 생성자는 만들어지지 않는다.
	double getvolume() { return (4.0 / 3.0) * pi * radius * radius * radius; }
};
int main()
{
	csphere sph(1, 2, 3, 4); //csphere 객체가 만들어지면 내부적으로 base 클래스가 먼저 생성되고 그다음 derived 클래스가 생성된다.
	cout << sph.getvolume() << endl;
}