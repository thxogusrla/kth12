#include<iostream>
using namespace std;
class carray {
private:
	int count;
	int *x;

public:
	carray(int a) { count = a; x = new int[count]; } //������ ->5���� ������ ������ ������ �����Ҵ� �޾���.
	void Delete() { delete[] x; } //��� �Լ� 
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