#include<iostream>
using namespace std;
class carray
{
private:
	int ary[5];
public:
	carray() 
	{
		for (int i = 0; i < 5; i++)
			ary[i] = 0;
	}
	int &getelem(int i) //정수형 참조를 해주고, //&를 왜 해준거지?
	{
		return ary[i];
	}
	carray &increase(int a)//&를 왜 해준거지?
	{
		ary[a] += 1;
		return (*this);
	}
};
int main()
{
	int i;
	carray ary;
	for (i = 0; i < 5; i++)
		ary.getelem(i) = i; //정수형을 받음.
	ary.increase(0).increase(1).increase(2).increase(3).increase(4);
	for (i = 0; i < 5; i++)
		cout << "ary[" << i << "]" << ary.getelem(i) << endl;
}