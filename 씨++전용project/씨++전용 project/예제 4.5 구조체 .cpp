#include<iostream>
using namespace std;
class cpoint {
private:
	int x;
public:
	int y;
	cpoint(int a, int b) { x = a; y = b; } //생성자를 이용한 초기화
	void print() { cout << x << " " << y << endl; }
};
int main()
{
	cpoint p1 = cpoint(3,4);
	p1.print();
	cpoint p2(5, 6);
	p2.print();
}