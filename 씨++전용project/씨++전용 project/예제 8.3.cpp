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
class cshape : public ccircle // cshape 클래스는 ccircle 클래스를 상속 받는다. 즉 ccircle에 있는 속성과 메서드를 사용할 수 있게 된다.
{//ccircle class 는 base 클래스가 되고 cshape class 는 derived 클래스가 된다.
public:
	int z;
public:
	double getvolume() { return ((4.0 / 3.0)*pi * radius * radius * radius); }
	void print() { cout << "구의 중심은 : " << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cshape sph; //class 변수 sph 선언. 이 떄 디폴트 생성자가 생성됨.
	sph.x = 1; sph.y = 1; sph.radius = 5; //protected 영역이 되었으므로 함수 외부 사용이 금지된다.
	cout << sph;
	sph.print();
	cout << "구의 표면적 :" << sph.getarea() << endl;
	cout << "구의 부피 :" << sph.getvolume() << endl;
	return 0;
}