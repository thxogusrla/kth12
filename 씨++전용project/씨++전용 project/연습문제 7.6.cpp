#include<iostream>
using namespace std;
class carray
{
private:
	int *p = new int[5];
	int i;
public:
	carray() {
		for (i = 0; i < 5; i++) p[i] = i;
	}	
	void print()
	{
		for (i = 0; i < 5; i++)
			cout << p[i] << " ";
		cout << endl;
	}
	friend carray &operator+(carray &ar1);  //�����Լ��� ������� ���ڰ� �Ѱ� �־����
	friend carray &operator-(carray &ar1);
};
carray &operator+(carray &ar1) //ar1 Ŭ���� ������ �����Ǿ��� ���������� ����. �׷��鼭 ar1�� p[5]�� �����ǰ� ������ 0 1 2 3 4�� ����Ǿ���.
{
	int *op = new int[5]; // 0 1 2 3 4 -> 4 0 1 2 3
	for (int i = 0; i < 5; i++) op[i] = ar1.p[i];
	for (int i = 0; i < 5; i++)
	{
		if (i == 0) ar1.p[i] = op[4];
		else ar1.p[i] = op[i - 1];
	}	return ar1;
}
carray &operator-(carray &ar1) //ar1 Ŭ���� ������ �����Ǿ��� ���������� ����. �׷��鼭 ar1�� p[5]�� �����ǰ� ������ 0 1 2 3 4�� ����Ǿ���.
{
	int *op = new int[5]; // 0 1 2 3 4 -> 1 2 3 4 0
	for (int i = 0; i < 5; i++) op[i] = ar1.p[i];
	for (int i = 0; i < 5; i++)
	{
		if (i == 4) ar1.p[i] = op[0];
		else ar1.p[i-1] = op[i];
	}	return ar1;
}
int main()
{
	carray ary1;
	ary1.print();

	carray ary2 = +ary1;
	ary1.print();
	ary2.print();
	-(-ary1);  //-ar1 = ar1.operator-()
	ary1.print();
}
/*�Լ� ��ü�� ��ȯ�� �ȰŸ� �� �Լ� �ȿ� �ִ� ������ ��� ��� �� �� �ִ°ǰ�?? �׷��ٸ� ��ȯ�Ǵ� �Լ� �ȿ� �ִ� ������������ ������� �ʴ°ǰ�?*/