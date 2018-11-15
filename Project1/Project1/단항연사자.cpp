#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint &operator-() { x = -x; y = -y; return *this; } // �̰� �ڱ� �Լ��� ��ȯ�� �Ǿ��ݾ�?
	friend ostream &operator<<(ostream &out, const cpoint &po);

};
//�ڱ� �Լ��� ��ȯ�ϰ� �Ǹ� �Լ��� ���ᰡ �Ǿ ������� �ʴ±���. &�� ������ ������ �ȴ�?
 ostream &operator<<(ostream &out, const cpoint &po)
{
	 out << "(" << po.x << "," << po.y << ")" << endl;
	 return out;
}
int main()
{
	cpoint p1(1, 1);
	cpoint p2 = -p1; // p2 = -1 -1
	cout << p2;
	cpoint p3 = -p1;
	cout << p1;
	cout << p3;
}