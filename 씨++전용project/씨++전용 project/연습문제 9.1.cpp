#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint( ccircle &cir) { x = cir.getx(); y = cir.gety(); } //���������.
};
class ccircle
{
private:
	int x, y,r;
public:
	ccircle(int a, int b, int c) : x(a), y(b), r(c) {}
	ccircle(const ccircle &po) { x = po.x; y = po.y; r = po.r; }
	ccircle &operator=(const ccircle &cir) { x = cir.x; y = cir.y; r = cir.r; return *this; }
	int getx() { return x; }
	int gety() { return y; }
};
class csphere : public ccircle
{
private:
	int z;
public:
	csphere(int a, int b, int r, int x) : ccircle(a, b, r), z(x) {}
};
int main()
{
	cpoint po(1, 1);
	ccircle cir(2, 2, 2);
	csphere sph(3, 3, 3, 3);

	cpoint po2 = cir; //����Ʈ ���Կ����ڰ� �۵������� ���� ������ ��ü������ ������ �������� x
	ccircle cir = sph;
	//csphere sph2 = cir;
	return 0;
}