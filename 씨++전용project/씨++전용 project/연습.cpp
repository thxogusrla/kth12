#include<iostream>
using namespace std;

int plus1(int x, int y)
{

	return (x + y);
}
int main()
{
	int x, y;
	int a;
	cout << "x �� y �� ���� �Է� :";
	cin >> x >> y ;
	
	cout <<plus1(x,y);
}