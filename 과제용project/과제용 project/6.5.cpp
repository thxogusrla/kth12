#include<iostream>
using namespace std;
class carray
{
private:
	int *ary, count;
public:
	carray(int a) :count(a) {
		ary = new int[count];
		for (int i = 0; i < count; i++)
			ary[i] = i;
	}
	carray &set(int a, int b)
	{
		ary[a] = b;
		return (*this);
	}
	carray(const carray &p1) : count(p1.count) { 
		ary = new int[count];
		for (int i = 0; i < count; i++)
			ary[i] = i;
	}
	void print() {
		for (int i = 0; i < count; i++)
			cout << ary[i] << " ";
		cout << endl;
	}
	~carray() { delete[]ary; }
};
int main()
{
	carray ary1(6);
	carray ary2(7);
	carray ary3(ary1);
	ary2.set(0, 11).set(1, 12).set(2, 13);
	ary1.print();
	ary2.print();
	ary3.print();
	return 0;
}