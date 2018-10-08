/*��������ڸ� �̿��ؼ� ���� �����ε��� ���� �� �ֳ�?*/
#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint(const cpoint &p1, int b = 0) : x(p1.x+b),y(p1.y+b) {	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	//cpoint operator+(const cpoint &p1, const cpoint &p2) { return cpoint(p1.x + p2.x, p2.x + p2.y); } //�̹����� �ֹ߻��ϴ°ɱ�?
	friend cpoint operator+(const cpoint &p1, const cpoint &p2);
	friend cpoint operator+(const cpoint &po, int a);
};
cpoint operator +(const cpoint &po, int a)
{
	return cpoint(po.x + a, po.y + a);
}
cpoint operator +(const cpoint &p1, const cpoint &p2) // operator+(p1,p2)  
{
	return cpoint(p1.x + p2.x, p1.y + p2.y);
}
int main()
{
	cpoint p1(2, 3);
	cpoint p2(p1, 4); //p2 = p1 + 4;
	cpoint p3 (5,6); // -> p3 = p1.operator+(p2) �̿Ͱ��� ���� �Ǵ� ���� ����Լ��� ���� �����ε��� ����� ������.
	cpoint p4 = (p1 + p2) + p3; 
	cpoint p5 = p1 + (p2 + p3);
	cpoint p6 = p1 + 4;

	p2.print();
	p3.print();
	p4.print();
	p5.print();
	p6.print();
}
/*
int **p;
p = new int[2];
for(int i = 0 ; i<2; i++)
	p[i] = new int [3];  

*/