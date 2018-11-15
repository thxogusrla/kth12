#include<iostream>
#include<cstdlib>
using namespace std;
void sum_multi(int a[], int size, int &sum, int &multi)
{
	int i ;
	sum = 0; multi = 1;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
		multi *= a[i];
	}
}
int main()
{
	int sum, multi;
	int a[5],i;
	for (i = 0; i < 5; i++)
	{
		a[i] = rand() % 10+1;
	}
	for (i = 0; i < 5; i++) cout << a[i] << " ";
	cout << endl;

	sum_multi(a, 5, sum, multi);
	cout << "전체 합은 = " << sum << endl << "전체 곲 = " << multi << endl;
	return 0;
}