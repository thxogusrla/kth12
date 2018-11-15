#include<iostream>
using namespace std;
class cpoint
{
private: int x, y;
public:
	cpoint(int a = 0, int b = 0):x(a),y(b) {}
	//cpoint &operator++() { x++; y++; return *this; } //&가 붙으면 함수가 전역변수처럼 사용되는구나?!
	cpoint&operator++(int a) 
	{
		x++; y++; return *this;
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint &operator++(cpoint &po);
};
cpoint &operator++(cpoint &po) //전역 함수들은 *this가 없구나..
{
	po.x++; po.y++; return po; //this는 비정적멤버 안에서만 사용 가능하다.
}

int main()
{
	cpoint p1(1, 1);
	cpoint p2 = ++(++p1);
	cpoint f1(1, 1);
	cpoint f2 = (f1++)++;
	p1.print();
	p2.print();
	f1.print();
	f2.print();
}