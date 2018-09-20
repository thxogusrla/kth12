#include<iostream>
using namespace std;

int main()
{
	int x, y;
	double z;
	printf("질입");
	scanf("%d", &x);
	printf("속입");
	scanf("%d", &y);
	z = x * y * y / 2.0;
	printf("%d %d %lf", x, y, z);
}
