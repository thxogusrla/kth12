#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a, int b) : x(a), y(b) {} //�����ڿ� �ٷ� �ʱ�ȭ�� ���ذ���.
	void print() { cout << "(" << x << "," << y << ")"; }
};
int main()
{
	cpoint cp[3][2] = { {cpoint(0,0),cpoint(0,1)},  //[0][0],[0][1] ->�迭 �� �ε������� x�� y�� ���� ����Ǿ��ִ�.
						{cpoint(1,0),cpoint(1,1)},
						{cpoint(2,0),cpoint(2,1)} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			cp[i][j].print();
		cout << endl;
	}
}