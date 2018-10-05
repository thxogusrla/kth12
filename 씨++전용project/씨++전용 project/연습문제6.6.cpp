#include<iostream>
using namespace std;
class carray
{
private:
	int *ary, len;
public:
	carray(int a) :len(a) {
		ary = new int[len];
		for (int i = 0; i < len; i++)
			ary[i] = i;
	}
	carray &set(int a, int b)  //a는 인덱스 b는 원소.
	{
		ary[a] = b;
		return (*this);
	}
	carray(const carray &po) :len(po.len) {
		ary = new int[len];
		for (int i = 0; i < len; i++)
			ary[i] = i;
	}
	carray(){};
	void print() {
		for (int i = 0; i < len; i++)
			cout << ary[i] << " ";
		cout << endl;
	}
	int length() 
	{

	}
};
 carray sum(carray a1, carray a2) 
{

}
int main(void)
{
	carray ary1(5);                                                 //0  1  2  3 4 
	carray ary2(7);                                                 //11 12 13 3 4 5 6 
	ary2.set(0, 11).set(1, 12).set(2, 13);                          //11 13 15 6 8 5 6
	carray ary3 = sum(ary1, ary2);
	ary1.print();
	ary2.print();
	ary3.print();
}