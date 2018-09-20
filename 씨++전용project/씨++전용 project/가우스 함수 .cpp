#include<iostream>
using namespace std;
inline double floor(double x)
{
	int n = x; //x = -1.1 n = -1
	if (n > x) n--;
	return n;
}
int main()
{
	double x;
	cout << "ют╥б :";
	cin >> x;
	cout << floor(x); 
}