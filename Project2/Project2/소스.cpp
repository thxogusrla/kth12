#include<iostream>
using namespace std;

int main()
{
	int x, y;
	double z;
	printf("����");
	scanf("%d", &x);
	printf("����");
	scanf("%d", &y);
	z = x * y * y / 2.0;
	printf("%d %d %lf", x, y, z);
}
