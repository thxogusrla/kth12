#include<iostream>
using namespace std;
class ccircle
{
public:
	class cpoint
	{
	private:
		int x, y;
	public:
		cpoint(int a = 0, int b = 0) :x(a), y(b) {}
		void move(int a, int b);
		void print();
	};
private: //ccircle private 영역
	cpoint center;
	double radius;
public:
	ccircle(int a, int b, double r) : radius(r) { center.move(a, b); }
	void print() {
		center.print(); //cpoint 객체의 멤버함수를 이용.
		cout << "반지름 : " << radius << endl;
	} 
};
void ccircle::cpoint::move(int a, int b)//써클함수 안에 있는 cpoint함수의 move 멤버 함수를 사용하겠다.
{
	x += a; y += b;
}
void ccircle::cpoint::print() { cout << "중심 : (" << x << "," << y << ")" << endl; }
int main()
{
	ccircle cir(3, 4, 5); //cir은 ccircle 클래스의 변수로 선언됨.
	cir.print();
	ccircle::cpoint p2(100, 200);
	p2.print();
	return 0;
}