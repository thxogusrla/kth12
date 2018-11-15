#include<iostream>
#define pi 3.14
using namespace std;
class ccircle 
{
protected:
	int x, y;
	double radius;
public:
	ccircle(int a, int b,double r) :x(a), y(b), radius(r) {} //생성자를 선언하므로 중신 x y와 반지름 r 값을 가지는 원이 만들어짐.
	double getarea() { return pi * radius * radius; }

};
class cshape : ccircle // == private ccircle과 같은거지? 디폴트 액세스 지정자 ccircle은 현재 클래스함수로 만들어짐. 즉 private로 상속받지.
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
	ccircle1(int a, int b, double r) :x(a), y(b), radius(r) {} //생성자를 선언하므로 중신 x y와 반지름 r 값을 가지는 원이 만들어짐.
	double getarea() { return pi * radius * radius; }

};
class cshape :ccircle1 //디폴트 액세스 지정자 ccircle은 현재 클래스함수로 만들어짐. 즉 private 영역이야 모두가.
{
private:
	int z;
public:
	cshape(int a, int b, int c, double r) : ccircle1(a, b, r), z(c) {}
	double getvolume() { return ((4.0) / 3.0)*pi * radius *radius *radius; } //오류가 뜨는 이유는 디폴트 액세스 지정자가 class 이기 떄문이지.
};