#include<iostream>
using namespace std;
class point
{
private :
	int x;
	int y;
public :
	void setxy(int a, int b) { x = a; y = b; } //x=a�� �����. 
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	void move(int a, int b) { x = x + a; y = y + b; } //

}; 
int main(void)
{
	point p1;
	p1.setxy(3, 4);
	p1.print();
	cout << "�̵� �� ���� ��ǥ " << endl;
	p1.move(1, 2);
	p1.print();
	return 0;
}