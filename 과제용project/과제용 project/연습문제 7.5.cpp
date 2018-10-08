#include<iostream>
using namespace std;
class carray
{
private:
	int *p = new int [5]; //p[5]
public:
	carray() {
		for (int i = 0; i < 5; i++) p[i] = i;
	}
	carray &operator+() { //�� ���Ҹ� ���������� 1�� �̵���Ŵ 0 1 2 3 4 -> 4 0 1 2 3
		int *op = new int[5];
		for (int i = 0; i < 5; i++) op[i] = p[i]; //op[5] -> 0 1 2 3 4 �̰� �ٽ� �迭 p�� 1�� �������Ѽ� ����.
			for (int i = 0; i < 5; i++) //
			{
				if (i == 0) p[i] = op[4];
				else  p[i] = op[i - 1];
			}
		return *this; 
	}
	carray &operator-() { // 0 1 2 3 4 -> 1 2 3 4 0 //�Լ��� ��ȯ�ؼ� ��� ����Ϸ��� ���ϱ�?
		int *op = new int[5];
		for (int i = 0; i < 5; i++) op[i] = p[i];
		for (int i = 0; i < 5; i++) //op[0][1][2][3][4]
		{
			if (i == 0) p[4] = op[0];
			else p[i - 1] = op[i]; //*���� : p[i] = op[i+1]�� i�� 4�� ��� op[5]�� �Ǳ� ������ ������� ����.
		}
		return *this;
	}
	void print() 
	{
		for (int i = 0; i < 5; i++)
			cout << p[i] << " " ;
		cout << endl;
	}

};

int main()
{
	carray ary1;
	ary1.print();

	carray ary2 = +ary1; 
	ary1.print();
	ary2.print();
	-(-ary1);
	ary1.print();
}
/*�Լ� ��ü�� ��ȯ�� �ȰŸ� �� �Լ� �ȿ� �ִ� ������ ��� ��� �� �� �ִ°ǰ�?? �׷��ٸ� ��ȯ�Ǵ� �Լ� �ȿ� �ִ� ������������ ������� �ʴ°ǰ�?*/