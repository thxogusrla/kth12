#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class carray
{
private:
	int count, *ary;
public:
	carray(int a) :count(a) 
	{
		ary = new int[count];
		for (int i = 0; i < count; i++) ary[i] = rand() % 10;
	}
	carray(const carray &po) // 복사생성자.
	{
		count = po.count;
		ary = new int[count];
		for (int i = 0; i < count; i++)
			ary[i] = po.ary[i];
	}
	carray &operator=(const carray &po)
	{
		count = po.count;
		ary = new int[count];
		for (int i = 0; i < count; i++) ary[i] = po.ary[i];
		return *this;
	}
	friend ostream &operator<<(ostream &out, const carray po);
};
ostream &operator<<(ostream &out, const carray po)
{
	for(int i = 0 ; i<po.count; i++)
	out << po.ary[i]<< "        " ;
	return out;
}

int main(void)
{
	srand((unsigned)time(NULL));
	carray ary1(3);
	carray ary2(5);

	cout << ary1 << endl;
	cout << ary2 << endl;

	ary1 = ary2; // operator=(ary2)
	cout << ary1 << endl;
	cout << ary2 << endl;
}
/*
5	4	3
5	9	9	7	9
5	9	9	7	9
5	9	9	7	9
*/