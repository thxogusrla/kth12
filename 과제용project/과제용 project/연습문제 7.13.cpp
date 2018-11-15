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
		for (int i = 0; i < count; i++) ary[i] = rand() % 10;
	}

	carray &operator=(const carray &po)
	{
		count = po.count;
		ary = new int[count];
		for (int i = 0; i < count; i++) ary[i] = po.ary[i];
		return *this;
	}
	int &operator[](int index)
	{
		if (index < count)
			return ary[index];
		else
		{
			cout <<index << "번째 오류" << endl << "범위 벗어남, 0번째 인덱스에 값을 대입" << endl;
			return ary[0];
		}
	}
	friend ostream &operator<<(ostream &out, const carray po);
};
ostream &operator<<(ostream &out, const carray po)
{
	for (int i = 0; i < po.count; i++)
		out << po.ary[i] << "    ";
	return out;
}
int main()
{
	carray ary1(5);
	ary1[0] = 5;
	ary1[1] = 7;
	ary1[5] = 9;
	for (int i = 0; i < 5; i++)
		cout << ary1[i]<< " ";
}