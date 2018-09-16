#include<iostream>
#include"ns.h"
using namespace std;
int main()
{
	int x, y;
	cout << "x와 y를 입력하시오: ";
	cin >> x >> y;
	cout << "최대값 :" << MYNS::mymax(x, y);
	cout << "최솟값 :" << MYNS::mymin(x, y);
}