#include<iostream>
using namespace std;
class base
{
private:
	int x;
public:
	void func1() { cout << "base::func1" << endl; }
	void virtual func2() { cout << "base::func2" << endl; }
	void virtual func3() { cout << "base::func3" << endl; }
};
class derived :public base
{
private:
	int y;
public:
	void func1() { cout << "derived::func1" << endl; }
	void  func2() { cout << "derived::func2" << endl; }
	void  func4() { cout << "derived::func4" << endl; }
};
int main()
{
	base ba[2];
	derived de[2];
	base *pb;
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (i == 0) pb = &ba[j];
			else pb = &de[j];

			pb->func1();
			pb->func2();
			pb->func3();
		}
	}
	return 0;
}