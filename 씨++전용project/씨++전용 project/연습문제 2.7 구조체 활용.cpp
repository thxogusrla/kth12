#include<iostream>
using namespace std;
struct point {
	int x, y;
};
int main()
{
	int i;
	struct point *ary = new struct point[5];
	for (i = 0; i < 5; i++)
	{
		*(ary + i) = { i,i };
	}
	for (i = 0; i < 5; i++)
		cout << *(ary + i) << " ";
}