#include<iostream>
using namespace std;
class carray {
private:
	int count;
	int *x;

public:
	carray(int a) { count = a; x = new int[count]; } //생성자 ->5개의 정수형 변수의 공간을 동적할당 받았음.
	void Delete() { delete[] x; } //멤버 함수 
	void Print() {
		for (int i = 0; i < count; i++)
			cout << x[i] << endl;
	}
};
int main(void)
{
	carray ary(5);
	ary.Print();
	ary.Delete();
	return 0;
}