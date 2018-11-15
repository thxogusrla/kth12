#include<iostream>
using namespace std;
class carray
{
private:
	int count, *ary;
public:
	carray(int a) :count(a)
	{
		ary = new int[count];
	}
};
int main()
{
	carray ary1(5);

}