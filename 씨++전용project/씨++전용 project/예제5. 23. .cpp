#include<iostream>
using namespace std;
class ccircle
{
private:
	double radius;
	const double pi; //���� pi�� �޸𸮿��� �����ɶ� �ʱ�ȭ�� �����ش�. �׷��� �����ڿ��� pi�� �ʱ�ȭ ������.
public:
	ccircle(double r = 0) :radius(r),pi(3.14) {} //const���� pi�ʱ�ȭ.
	void setradius(double r) { radius = r; }
	double getarea()  const { return (pi * radius * radius); } //const�� �Լ���� �Լ���ü ���̿� �������ش�. �̰� ����ΰ� ����.

};
int main()
{
	ccircle cir1(1);
	cout << "���� :" << cir1.getarea() << endl;
	return 0;
}