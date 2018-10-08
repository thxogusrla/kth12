#include<iostream>
using namespace std;
class cpoint
{
private :
	int x, y;
public :
	cpoint(int a, int b) :x(a), y(b) {}
	cpoint operator++(int a) { //���� �����ڸ� ����ž�.
		cpoint &temp = *this; //�ӽ� ��ü�� �⺻ ��ü�� �������־��� ����? temp::x,y �� �׷��� cpoint::x,y �� ������ �Ȱǰ�?
 		x++; y++; return temp; //�ӽð�ü�� ��ȯ�ҰŴϱ� �����Լ��� �����ʿ䰡 ����.
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 1);
	//cpoint p2 = p1++; //p1 ++ -> p1 = p1 + 1
	cpoint p3 = (p1++)++;
	//���� p1�� 2����.
	p1.print(); //3 3 ---->2 2
	//p2.print(); // 2 2
	p3.print(); // 4 4---->3 3

	return 0;
}