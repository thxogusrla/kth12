#include<iostream>
using namespace std;
template<typename t>
void swap_1(t &a , t &b)
{
	t temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 3, b = 5;
	double c = 1.1, d = 2.2;
	cout << "���� �� : " << a << " " << b << endl;
	swap_1(a, b);
	cout <<"���� �� : " << a << " " << b << endl;

	cout << "���� �� : " << c << " " << d << endl;
	swap_1(c, d);
	cout << "���� �� : " << c << " " << d << endl;
	return 0;

}