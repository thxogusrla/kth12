#include<iostream>
#include"ns.h"
using namespace std;
int main()
{
	int x, y;
	cout << "x�� y�� �Է��Ͻÿ�: ";
	cin >> x >> y;
	cout << "�ִ밪 :" << MYNS::mymax(x, y);
	cout << "�ּڰ� :" << MYNS::mymin(x, y);
}