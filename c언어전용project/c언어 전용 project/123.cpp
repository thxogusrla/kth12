#include<iostream>
using namespace std;
int sum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum; //지역변수로 되있다한들 리턴값은 그대로 진행된다.
}
int main()
{
	int a = 10, b = 5;
	cout << sum(a, b);
}