#include<iostream>
using namespace std;
int main()
{
	int var1 = 1;
	int var2 = 2;
	const int *p1;
	//int *const p2;
	int *const p2 = &var1;
	p1 = &var1;
	p1 = &var2;//p1이 가리키는 변수의 주소를 바꿀 수 있다. 
	//*p1 = 5; //하지만 p1이 가리키는 곳의 변수의 값을 변경 시킬 수는 없다.
	var2 = 4;
	*p2 = 3;
	//p2 = &var2;
	printf("var1 ");

}