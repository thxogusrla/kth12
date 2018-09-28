/*
int getsumx(cpoint *ary, int size)
{
	클래스 범위 밖에서 함수를 정의하고 클래스 함수의 x,y변수를 쓰고 싶으면 프렌드함수를 쓰면되는건가?
}
*/
#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint() : x(0),y(0) {} //sum을 위한 생성자.
	cpoint(int a, int b) : x(a), y(b) {} //매개변수가 두개인 생성자를 선언.
	void setxy(int a, int b) { x = a; y = b; }
	void print() { cout << "(" << x << ", " << y << ")"; }
	int getsumx(cpoint *ary, int size)
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
			sum += ary[i].x;
		return sum;
	}
	int getsumy(cpoint *ary, int size)
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
			sum += ary[i].y;
		return sum;
	}
};

int main(void)
{
	cpoint ary[5] = { cpoint(1,2), cpoint(3,4) , cpoint(5,6) }; //1,2 ,3 4
	cpoint sum;
	sum.setxy(sum.getsumx(ary, 5), sum.getsumy(ary, 5));
	sum.print();
	return 0;
}