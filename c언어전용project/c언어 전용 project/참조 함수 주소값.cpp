#include<iostream>
using namespace std;
int main()
{
	int a = 3;
	int &b = a;
	cout << &a << endl << &b;
}