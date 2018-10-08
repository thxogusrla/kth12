#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	/*---------------------------------------------------------*/
	cpoint &operator++() { x++; y++; return *this; }
	cpoint operator++(int a)
	{
		cpoint temp = *this;
		x++; y++; return temp;
	}
	/*---------------------------------------------------------*/
	cpoint &operator--() { x--; y--; return *this; }
	cpoint operator--(int a)
	{
		cpoint temp = *this;
		x--; y--; return temp;
	}
	/*---------------------------------------------------------*/
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{//---------------------------------->1 2 3 3 2 1 출력
	cpoint p1(1, 1);
	cpoint p2 = (++p1)++; //2 2 가 저장.
	cpoint p3 = (p1++); // 3 이 저장 
	cpoint p4 = --p1;
	cpoint p5 = (--p1)--;
	cpoint p6 = p1;
	p1.print(); // 1 1
	p2.print(); // 3
	p3.print(); // 1 1
	p4.print();
	p5.print();
	p6.print();
	return 0;
}