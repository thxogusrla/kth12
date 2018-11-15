#include<iostream>
#define pi 3.14
using namespace std;

class ccircle
{
protected:
	int x, y;
	double radius;
public:
	double getarea() { return (pi * radius * radius); }
	friend ostream &operator<<(ostream &out, ccircle &po);
};
ostream &operator<<(ostream &out, ccircle &po)
{
	out << "(" << po.x << "," << po.y << ")" << endl;
	return out;
}
class cshape : public ccircle // cshape Ŭ������ ccircle Ŭ������ ��� �޴´�. �� ccircle�� �ִ� �Ӽ��� �޼��带 ����� �� �ְ� �ȴ�.
{//ccircle class �� base Ŭ������ �ǰ� cshape class �� derived Ŭ������ �ȴ�.
public:
	int z;
public:
	double getvolume() { return ((4.0 / 3.0)*pi * radius * radius * radius); }
	void print() { cout << "���� �߽��� : " << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cshape sph; //class ���� sph ����. �� �� ����Ʈ �����ڰ� ������.
	sph.x = 1; sph.y = 1; sph.radius = 5; //protected ������ �Ǿ����Ƿ� �Լ� �ܺ� ����� �����ȴ�.
	cout << sph;
	sph.print();
	cout << "���� ǥ���� :" << sph.getarea() << endl;
	cout << "���� ���� :" << sph.getvolume() << endl;
	return 0;
}