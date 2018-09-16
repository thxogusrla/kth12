#include<iostream>
using namespace std;
void update(int var1, int &var2)
{
	var1 += var1;
	var2 += var2;

}
int main()
{
	int a = 1, b = 1;
	for (int i = 0; i < 5; i++)
		update(a, b);
	cout << "a = " << a << endl; //1이 출력
	cout << "b = " << b << endl; //32가 출력 
}
/*var1은 매개변수로 값에의한 전달로 값이 무의미 해짐
var2는 참조매개변수가 되면서 update함수에서의 var2는 b와 같은 변수가 되면서 값이 유지가 됨*/