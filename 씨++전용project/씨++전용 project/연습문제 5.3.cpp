#include<iostream>
#include<stdlib.h>
using namespace std;
class cpoint
{
	int x, y;
public :
	cpoint() :x(0), y(0) {}
	//cpoint(int a) : x(a), y(a) {}
	cpoint(int a, int b) : x(a), y(b) {}
	void print() { cout << " ( " << x << "," << y << " ) "; }
	void setxy(int a, int b) { x = a; y = b; }
};
int main()
{
	cpoint **ptr ;
	int i, j;
	ptr = new cpoint*[2];
	for (i = 0; i < 3; i++) ptr[i] = new cpoint[3]; //ptr[2][3]
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			//ptr[i][j] = rand() % 25; //rand 함수는 정수형이니깐 적용을 못하는 구나.
			ptr[i][j].setxy(rand() % 25, rand() % 25);
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			ptr[i][j].print();
	}
	for (int i = 0; i < 2; i++)
	{
		delete[]ptr[i]; //이차원배열일 경우엔 먼저 
	}
	delete ptr;
}