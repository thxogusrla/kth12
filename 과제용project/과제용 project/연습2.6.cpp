#include<iostream>
using namespace std;
int *GetArray(int a)
{
	int *p = new int[a];
	int i;
	for (i = 0; i < a; i++)
	{
		p[i] = i;
	}
	return p;
}

int main()
{
	int i;
	int *pAry;
	pAry = GetArray(5);
	for (i = 0; i < 5; i++)
	{
		cout << pAry[i] << " ";
	}
	cout << endl;
	delete[] pAry;
}