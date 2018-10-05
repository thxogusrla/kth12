#include<iostream>
using namespace std;
int main()
{
	int *a = new int[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += i;
	}
	cout << sum;
}