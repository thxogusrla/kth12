#include<iostream>
using namespace std;
void update(int var1, int &var2)
{
	var1 += var1; //var1 = var1 + var1
	var2 += var2; // var2 = var2 + var2
}
int main()
{
	int a = 1, b = 1;
	for (int i = 0; i < 5; i++)
		update(a, b);
	cout << "a = " << a << endl; //a는 값에 의한 전달이니까 
	cout << "b = " << b << endl; //참조에 의한 전달이 이뤄졌으므로 2 4 8 16 32.... 32가 출력됨.
	return 0; 
}