#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(const cpoint & po) { x = po.x; y = po.y; } //복사생성자.
	cpoint operator=(const cpoint &po) { x = po.x; y = po.y; return *this; } //자기 자신을 반환.
};
class cpoint3 :public cpoint
{
private:
	int z;
public:
	cpoint3(const cpoint3 &po) :cpoint(po) { z = po.z; } //cpoint의 복사생성자를 cpoint3 에서 쓰고 있네?
	cpoint3 &operator=(const cpoint3 &po) 
	{
		cpoint ::operator=(po); z = po.z; return *this;
	}
};