#include<iostream>
using namespace std;
int *getarray(int x);

int main()
{
	int i;
	int *pary;
	pary = getarray(5);
	for (i = 0; i < 5; i++)
		cout << pary[i] << " ";
	cout << endl;
	delete[]pary;
	return 0;
}
int *getarray(int x)
{
	int *p = new int[x]; //p[4] = p[0][1][2][3]
	int i; //반복제어변수
	for (i = 0; i < x; i++)
		p[i] = i; 
	return p;
}
int *p;
int *a = &a[0];