#include<iostream>
#define pi 3.14
using namespace std;
class ccircle 
{
protected:
	int x, y;
	double radius;
public:
	ccircle(int a, int b,double r) :x(a), y(b), radius(r) {} //�����ڸ� �����ϹǷ� �߽� x y�� ������ r ���� ������ ���� �������.
	double getarea() { return pi * radius * radius; }

};
class cshape : ccircle // == private ccircle�� ��������? ����Ʈ �׼��� ������ ccircle�� ���� Ŭ�����Լ��� �������. �� private�� ��ӹ���.
{
private:
	int z;
public:
	cshape(int a, int b, int c, double r) : ccircle(a, b, r), z(c) {}
	double getvolume() { return ((4.0) / 3.0)*pi * radius *radius *radius; }
};
struct ccircle1
{
protected:
	int x, y;
	double radius;
public:
	ccircle1(int a, int b, double r) :x(a), y(b), radius(r) {} //�����ڸ� �����ϹǷ� �߽� x y�� ������ r ���� ������ ���� �������.
	double getarea() { return pi * radius * radius; }

};
class cshape :ccircle1 //����Ʈ �׼��� ������ ccircle�� ���� Ŭ�����Լ��� �������. �� private �����̾� ��ΰ�.
{
private:
	int z;
public:
	cshape(int a, int b, int c, double r) : ccircle1(a, b, r), z(c) {}
	double getvolume() { return ((4.0) / 3.0)*pi * radius *radius *radius; } //������ �ߴ� ������ ����Ʈ �׼��� �����ڰ� class �̱� ��������.
};