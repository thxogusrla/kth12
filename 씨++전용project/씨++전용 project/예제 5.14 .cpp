#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	friend void center(cpoint p1, cpoint p2); //class ��ü �ȿ� ���� �Լ��� friend�� ����
};
void center(cpoint p1, cpoint p2) //center�Լ��� cpoint ��ü�� ��� �������� ����� �� �ִ�.
{
	cpoint p;
	p.x = (p1.x + p2.x) / 2;
	p.y = (p1.y + p2.y) / 2;
	cout << "�߽� : " << "(" << p.x << "," << p.y << ")" << endl;
}
int main()
{
	cpoint cp1(1, 2), cp2(3, 4);
	center(cp1, cp2);
}