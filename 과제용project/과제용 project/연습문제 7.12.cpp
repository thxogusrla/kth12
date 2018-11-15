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
		for (int i = 0; i < po.count; i++) //왜 여기 부분의 count를 바꿔주니까 되는거지??
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
	friend carray operator+(const carray &p1, const carray &p2);
};

carray operator+(const carray &p1, const carray &p2)
{
	carray p3(p1.count + p2.count); // 
	int a = 0;
	for (int i = 0; i < p1.count; i++) p3.ary[a++] = p1.ary[i];
	for (int i = 0; i < p1.count; i++) p3.ary[a++] = p2.ary[i];
	return p3;
}
ostream &operator<<(ostream &out, const carray po)
{
	for (int i = 0; i < po.count; i++)
		out << po.ary[i] << "        ";
	return out;
}
int main()
{
	srand((unsigned)time(NULL));
	carray ary1(3);
	carray ary2(5);
	carray ary3(7);
	cout << ary1 << endl;
	cout << ary2 << endl;
	cout << ary3 << endl;

	ary3 = ary1 + ary2;
	cout << ary1 << endl;
	cout << ary2 << endl;
	cout << ary3 << endl;
	return 0;
}