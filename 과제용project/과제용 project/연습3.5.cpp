#include<iostream>
using namespace std;
void sum_x(int a[], int n, int &sum, int &x)
{
	int i;
	sum = 0;
	x = 1;
	for (i = 0; i < n; i++)
		sum += a[i];
	for (i = 0; i < n; i++)
		x *= a[i];	
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int sum, x; //합과 곱에 대한 변수를 선언
	sum_x(a, 5, sum, x); //sum과 x는 참조변수가 되어 값이 유지됨.
	cout << sum << endl; //배열 원소의 전체가 더해진 값이 출력됨.
	cout << x << endl; // 배열 원소의 전체가 곱해진 값이 출력됨.
	return 0;
}