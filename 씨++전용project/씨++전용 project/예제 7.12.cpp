#include<cstdio>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	friend class ostream;
	friend class istream;

};
class ostream
{
public:
	ostream &operator<<(const cpoint &po)  //��������ڸ� po ������־���. 
	{
		printf("(%d  , %d)\n", po.x, po.y);
		return (*this);
	}
};
class istream
{
public:
	istream &operator>>(cpoint &po) //�Է¹����� ���� ����. Ŭ���� �Լ� �ڱ� ��ü�� ��ȯ��.
	{
		printf("x�� y ��ǥ ���� :");
		scanf("%d   %d",&po.x,&po.y);
		return *this;
	}
};
ostream cout; //����Ʈ �����ڰ� ����.
istream cin;  //����Ʈ �����ڰ� ����.
int main()
{
	cpoint p1(3, 4);
	cout << p1;
	cin >> p1;
	cout << p1;
	return 0;
}