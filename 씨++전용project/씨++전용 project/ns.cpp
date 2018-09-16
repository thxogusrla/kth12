#include<iostream>
using namespace std;
int a(int x,int y=2)
{
	return x * x;
}
int b(int x, int y=2)
{
	int i,result=1;
	cin >> y;
	for (i = 0; i < y; i++)
	{
		result *= x; //result = result * x
	}
}
int main()
{

}