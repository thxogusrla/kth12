#include<iostream>
using namespace std;
struct A 
{
	int m; //��ü ����.
	static int s; //
	int *pm;
	const int q=2;
	void f() {} //
	void f2() { f(); fc(); }
	static void fs() {}
	void fc() const { } //��� ������ ���� ���� ������ ���������� ���Ѵ�.
	void fc2() const { pm; fc(); f(); fs(); fs2(); } //�Լ��� �θ��� ���ϴ� ������ f()���� m�� ������ �� �� �ֱ� �����̴�. �׸��� �ּҰ��� ��ȯ�ϴ� �͵� ���� ����.
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