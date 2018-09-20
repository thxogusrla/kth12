#include<iostream>
using namespace std;
class point
{
private :
	int x;
	int y;
public :
	void setxy(int a, int b) { x = a; y = b; } //x=a가 저장됨. 
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	void move(int a, int b) { x = x + a; y = y + b; } //

}; 
int main(void)
{
	point p1;
	p1.setxy(3, 4);
	p1.print();
	cout << "이동 한 후의 좌표 " << endl;
	p1.move(1, 2);
	p1.print();
	return 0;
}