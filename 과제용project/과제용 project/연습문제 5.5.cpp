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
	int &getelem(int i) //������ ������ ���ְ�, //&�� �� ���ذ���?
	{
		return ary[i];
	}
	carray &increase(int a)//&�� �� ���ذ���?
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
		ary.getelem(i) = i; //�������� ����.
	ary.increase(0).increase(1).increase(2).increase(3).increase(4);
	for (i = 0; i < 5; i++)
		cout << "ary[" << i << "]" << ary.getelem(i) << endl;
}