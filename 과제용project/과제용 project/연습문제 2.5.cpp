#include<iostream>
using namespace std;
int sum(int a = 1, int b = 2, int c = 3, int d = 4)
{
	return a + b + c + d;
}
int main()
{
	cout << sum() << endl; // 1+2+3+4
	cout << sum(5) << endl; // 5 + 2 + 3 + 4 
	cout << sum(5,6) << endl; // 5 + 6 + 3 + 4
	cout << sum(5,6,7) << endl; // 5 + 6 + 7 + 4
}