/* 정수현 변수 5개를 동적으로 할당받고 각각 해당원소의 인덱스 값으로 채우기 .*/
#include<iostream>
using namespace std;
int main()
{
	int *a = new int[5] , i; //
	for (i = 0; i < 5; i++)
	{
		a[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		cout << "a[" << i << "]" << "=" << a[i] << endl;
	}
	delete[]a; //사용된 메모리 공간은 남고 남은 메모리 공간은 해제 됨.
}