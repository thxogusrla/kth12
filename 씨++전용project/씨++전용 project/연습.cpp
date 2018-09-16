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
	cout << "x 와 y 의 값을 입력 :";
	cin >> x >> y ;
	
	cout <<plus1(x,y);
}