#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(const cpoint & po) { x = po.x; y = po.y; } //���������.
	cpoint operator=(const cpoint &po) { x = po.x; y = po.y; return *this; } //�ڱ� �ڽ��� ��ȯ.
};
class cpoint3 :public cpoint
{
private:
	int z;
public:
	cpoint3(const cpoint3 &po) :cpoint(po) { z = po.z; } //cpoint�� ��������ڸ� cpoint3 ���� ���� �ֳ�?
	cpoint3 &operator=(const cpoint3 &po) 
	{
		cpoint ::operator=(po); z = po.z; return *this;
	}
};