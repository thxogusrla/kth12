#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a) : x(a), y(a) {} //생성인자가 정수형인 것만을 받음.
	//cpont(cpoint a) 와 같은 생성인자가 cpoint인 것이 있어야지 받을 수 있음.
	void print() { cout << "(" << x << "," << y << ")" << endl; }

};
int main()
{
	cpoint p1(3);//생성가 p1
	cpoint p2 = cpoint(4); // 생성자 p2  cpoint p2(p3)
	cpoint p3 = 5; //==cpoint p3(5)
	p1.print();
	p2.print();
	p3.print();
	return 0;
}