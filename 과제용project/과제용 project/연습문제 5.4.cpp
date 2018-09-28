#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint &setx(int a) { x = 0; x += a; return (*this); } //함수자체를 반환
	cpoint &sety(int b) { y = 0; y += b; return (*this); }
	void print() { cout << "(" << x << "," << y << ")"; }
};
int main()
{
	cpoint p1;
	p1.setx(3).sety(4);
	p1.print();
	p1.setx(5).sety(6);
	p1.print();
	return 0;
}