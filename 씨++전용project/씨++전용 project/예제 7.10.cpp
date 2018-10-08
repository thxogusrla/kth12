#include<iostream>
using namespace std;
class cpoint
{
private :
	int x, y;
public :
	cpoint(int a, int b) :x(a), y(b) {}
	cpoint operator++(int a) { //후위 연산자를 만들거야.
		cpoint &temp = *this; //임시 객체에 기본 객체를 저장해주었네 왜지? temp::x,y 에 그러면 cpoint::x,y 가 저장이 된건가?
 		x++; y++; return temp; //임시객체를 반환할거니깐 참조함수로 만들필요가 없지.
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint p1(1, 1);
	//cpoint p2 = p1++; //p1 ++ -> p1 = p1 + 1
	cpoint p3 = (p1++)++;
	//현재 p1은 2상태.
	p1.print(); //3 3 ---->2 2
	//p2.print(); // 2 2
	p3.print(); // 4 4---->3 3

	return 0;
}