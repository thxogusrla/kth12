/*
int getsumx(cpoint *ary, int size)
{
	Ŭ���� ���� �ۿ��� �Լ��� �����ϰ� Ŭ���� �Լ��� x,y������ ���� ������ �������Լ��� ����Ǵ°ǰ�?
}
*/
#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint() : x(0),y(0) {} //sum�� ���� ������.
	cpoint(int a, int b) : x(a), y(b) {} //�Ű������� �ΰ��� �����ڸ� ����.
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