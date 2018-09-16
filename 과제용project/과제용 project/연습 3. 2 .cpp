#include<iostream>
using namespace std;

int main()
{
	int var1 = 2, var2 = 3;
	int &ref1 = var1; // 참조변수는 선언과 동시에 초기화 시켜준다.
	int &ref2 = var2;
	
	//ref1 = var1; 참조 변수를 따로 초기화 시켜 오류가 발생
	//ref2 = var2;
	int var3 = ref1; // var1과 var2를 서로 바꾸는 문장이다.
	ref1 = ref2;
	ref2 = var3;
	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;
	return 0;
}