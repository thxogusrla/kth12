#include<iostream>
using namespace std;
int &print_value(void)
{
	int var = 5; //지역변수 var란말이지 
	return var; //근데 지역변수인 var는 print_value 함수를 빠져나가면 사라져 하지만 var가 참조변수로 반환이 되자나 결국엔 아무것도 반환이 되지 않지.
} //참조 변수로 반환이 되면 어떻게 쓰일까?

int main()
{
	int &value = print_value();
	cout << value;
}