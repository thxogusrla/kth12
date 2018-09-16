#include<iostream>
#include<stdlib.h>
using namespace std;
void sum_multi(int a[],int n, int &sum, int &multi) //정수형 배열과 크기를 선언함. sum과 multi를 참조변수로 만들어준다.
{
	sum = 0;
	multi = 1;
	for (int i = 0; i < n; i++)
		sum += a[i];
	for (int i = 0; i < n; i++)
		multi *= a[i];
}
int main()
{
	int a[5];
	int sum, multi;
	for (int i = 0; i < 5; i++)
	{
		a[i] = (rand() % 10) + 1; // 원소 전체의 곱이 0이 나오는 것을 제외하기 위해 1을 더함.
	}
	cout << "a[5] = {";
	for (int i = 0; i < 5; i++)
		cout << a[i] << " " ; //배열 a의 어떤 값들이 들어있는지 출력해준다.
	cout << "}" << endl;
	sum_multi(a, 5, sum, multi); //참조에 의한 호출이 일어나고 sum과 multi는 참조변수로 값이 오기 때문에 값이 저장된다.
	cout << sum << endl;
	cout << multi << endl;
}