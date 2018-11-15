#include<iostream>
#define pi 3.14
using namespace std;
class ccircle
{
protected:
	int x, y;
	double radius;
public:
	double getarea() { return pi * radius*radius; }
};
class csphere :public ccircle //그대로 영역이 유지된다. csphere 가 ccircle에게 상속받았음. 
{
private:
	int z;
public:
	csphere(int a, int b, int c, double r) { x = a; y = b; radius = r; z = c; }
	double getvolume() { return (4.0 / 3.0) * pi * radius * radius * radius; }
};
int main()
{
	csphere sph(1, 2, 3, 4);
	cout << sph.getvolume() << endl;
}