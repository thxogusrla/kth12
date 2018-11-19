#include<iostream>
using namespace std;
template <typename t>
t sum(t a, t b)
{
	t c = a + b;
	return c;
}
template<>
double sum(double a, double b)
{
	double c = a * b;
	return c;
}
double sum(double a, int b)
{
	double c = a - b;
	return c;
}
int main()
{
	int x = sum(4, 7);
	double y = sum(5.0, 2.5);
	double z = sum(8.3, 2);

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	return 0;
}