#include<iostream>
using namespace std;
int main(void)
{
	int var1 = 2, var2 = 3;//var1은 선언과동시에 2를 나타내고 var2는 선언과동시에 3을 나타낸다.
	int &ref1 = var1;// var1은 ref1을 참조한다.
	int &ref2 = var2;// var2는 ref2를 참조한다.
	int var3 = ref1;// var3은 선언과 동시에 ref1과 같다.
	ref1 = ref2;// ref2의 값을 ref1에 저장 하라.
	ref2 = var3;

	cout << "var1 :" << var1 << endl;
	cout << "var2 :" << var2 << endl;

	return 0;
}

