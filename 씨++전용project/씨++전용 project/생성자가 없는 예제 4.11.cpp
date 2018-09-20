#include<iostream>
using namespace std;

class cpoint
{
private:
	int x, y;
public:
	void setxy(int a, int b) { x = a; y = b; }
	void print() { cout << x << " " << y << endl; }
};
int main()
{
	cpoint p1; //클래스에 생성자가 정의되어 있지 않지만 컴파일러가 명시적으로 생성자를 만들어준다.
	p1.setxy(3, 4);
	p1.print();
	return 0;
}