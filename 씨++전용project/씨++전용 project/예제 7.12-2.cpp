#include<cstdio>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a, int b) :x(a),y(b) {}
	friend class ostream;
	friend class istream;
};
class ostream
{
public:
	ostream &operator<<(const cpoint &po) //
	{
		printf(" %d  %d", po.x, po.y);
		return *this;
	}
};
class istream 
{
public:
	istream &operator>> (cpoint &po) //���� ���ϱ� ������ const�Լ��� ������ ����.
	{
		printf("��ǥ�� �Է��Ͻÿ� :");
		scanf("%d %d", &po.x, &po.y);
		return *this;
	}
};
ostream cout;
istream cin;

int main()
{
	cpoint p1(3, 4);
	cout << p1;

	cin >> p1;
	cout << p1;
	return 0;
}