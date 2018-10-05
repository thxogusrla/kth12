#include<iostream>
using namespace std;
class cpoint
{
private :
	int x, y;
	static int count; //클래스 안에서의 정적변수는 메인함수안에서 클래스 멤버 변수의 사용은 객체를 사용한다는 말이다.
public:
	cpoint(int a) :x(a) { count++; }
	cpoint(int a, int b) : x(a), y(b) { count++; }
	void print() { cout << "count = " << count << endl; }
};
int cpoint::count = 0;
int main()g
{
	cpoint a(1);
	a.print();//1

	cpoint b(1, 2);
	b.print();//2

	cpoint c(5);
	c.print();//3 출력이 되어야 함.
}