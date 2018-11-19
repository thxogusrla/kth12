#include<iostream>
using namespace std;
template<typename t>
t sum(t a, t b)
{
	t c = a + b;
	return c;
}
template<> //특화가 된 것은 우선순위가 일반함수보다 낮다.
int sum(int a, int b)
{
	int c = a * b;
	return c;
}
int sum(double a, double b)
{
	int c = a - b;
	return c;

}
int main()
{
	int x = sum(3, 4);
	double y = sum(1.1, 2.2);

	cout << x << endl;
	cout << y << endl;

	return
}