#include<iostream>
using namespace std;
class carray
{
private:
	int *x, count;
public:
	carray(int a) { count = a; x = new int[count]; }
	~carray() { delete[] x; }
	void print() { for (int i = 0; i < count; i++) cout << x[i] << endl; }
};
int main()
{
	carray ary(5);
	ary.print();
	//~carray(); 따로 호출할 필요 없이 생성자가 소멸되면 소멸자가 호출된다.
}