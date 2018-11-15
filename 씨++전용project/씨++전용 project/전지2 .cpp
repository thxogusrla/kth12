#include<iostream>
using namespace std;
struct A 
{
	int m; //객체 변수.
	static int s; //
	int *pm;
	const int q=2;
	void f() {} //
	void f2() { f(); fc(); }
	static void fs() {}
	void fc() const { } //멤버 변수를 읽을 수는 있으나 변경하지는 못한다.
	void fc2() const { pm; fc(); f(); fs(); fs2(); } //함수를 부르지 못하는 이유는 f()에서 m을 변경할 수 도 있기 때문이다. 그리고 주소값을 반환하는 것도 하지 못함.
	static void fs2() { pm; m = 1;  f(); fc(); fs(); }
};
void f()
{
	A a;
	A::m = 1;
	A::s = 2;
	A::f();
	A::fc();
	A::pm;
	a.fc2();
	a.f();
}