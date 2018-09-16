#include<iostream>
using namespace std;

int main()
{
	int var1 = 2, var2 = 3;
	int &ref1 = var1; //ref1라는 참조변수를 선언과 동시에 var1으로 초기화시켜준다.
	int &ref2 = var2; // ref2라는 참조변수를 선언과 동시에 var2로 초기화시켜준다.

	//ref1 = var1; 참조변수는 선언과 동시에 초기화를 시켜주어야 한다. 
	//ref2 = var2; 위에것과 마찬가지로 같은 방식으로 해주면 된다.
	int var3 = ref1; //정수형 변수 var3을 선언하였고 이 변수에 ref1이라는 값을 저장해 주었다.
	ref1 = ref2; //ref1은 var1과 같은 변수가 되었고 그 ref1에 ref2를 저장해주었다.
	ref2 = var3; //ref2 는 var2와 같은 변수가 되었고 ref2에 ref3의 값을 저장해주었다.

	cout << "var1 :" << var1 << endl; //3 결과적으로 var1에는 ref2라는 변수의 값이 저장 되었으므로 3이 출력되고
	cout << "var2 : " << var2 << endl; //2  var2에는 var3라는 변수의 값이 저장되었는데 var3의 변수에는 ref1의 변수값이 저장되었으므로 결국 var2에는 var1값이 저장되었다.

	return 0;
}