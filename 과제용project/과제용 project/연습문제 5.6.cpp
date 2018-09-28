#include<iostream>
using namespace std;
class ccircle
{
private:
	int x, y; //�߽��� x,y
	double radius; //������.
public:
	//ccircle() :x(0),y(0),radius(1.0){} �ؿ� �ִ� �����ڿ� ���� �������̹Ƿ� ����
	ccircle(int a=0, int b=0) : x(a), y(b), radius(1.0) {} //����Ʈ �Ű����� ���.
	ccircle(int a, int b, double c) : x(a), y(b), radius(c) {} //�����ڸ� �ʱ�ȭ.
	double getarea() 
	{
		return 3.14 * radius*radius;
	}
	double getarea(double radius_get)
	{
		return 3.14 * radius_get * radius_get;
	}
	void move(int a, int b) { x += a; y += b; }
	void print() { cout << "�߽� : (" << x << "," << y << ")" << " " << "���� :" << getarea() << endl; }
};
int main()
{
	ccircle c1;
	ccircle c2(1, 1);
	ccircle c3(2, 2,2);
	cout << "getarea �׽�Ʈ :" << c1.getarea(10) << endl;
	c2.move(3, 3);
	c1.print();
	c2.print();
	c3.print();
}