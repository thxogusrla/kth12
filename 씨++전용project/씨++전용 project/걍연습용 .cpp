#include<iostream>
#include<stdlib.h>
using namespace std;
int &getarray(int *ary, int index) // 함수 반환형이 참조 인것
{
	int i;
	for (i = 0; i < index; i++)
	{
		ary[i] = rand() % 10;
	}
	
	return ary[index]; //참조변수가 반환된다.
}
int main()
{
	int ary[5], i;
	
	getarray(ary, 5); //함수를 호출해서 0부터 4까지의 인덱스 각각에 값을 받았음
	for (i = 0; i < 5; i++)
	{
		cout <<"ary["<<i << "]" << " :" << ary[i] << endl;
	}
	return 0;
}