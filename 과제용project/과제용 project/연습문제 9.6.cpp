#include<iostream>
#define pi 3.14
using namespace std;
class cshape
{
private:
	int x, y; //중심
public:
	cshape(int a = 0, int b = 0) :x(a), y(b) {}
	virtual void print() = 0; //순수 가상함수, 이 함수만 쓰게 되면 cshape 객체 생성이 아예 불가하게 되는건가?
	friend ostream &operator<<(ostream &out, const cshape &shp);
};
ostream &operator<<(ostream &out, cshape &shp)
{
	shp.print();
	return out;
}
class ccircle:public cshape
{
private:
	int radius;
public:
	ccircle(int a, int b, int r) :cshape(a, b), radius(r) {} //중심 (a,b) 반지름 r
	double getarea() { return pi * radius*radius; }
	void print() { cout <<"원의 면적 :" <<ccircle::getarea() << endl; }
};
class crect :public cshape
{
private:
	int garo, sero;
public:
	crect(int a, int b, int ga, int se) :cshape(a, b), garo(ga), sero(se) {}
	double getarea() { return garo * sero; }
	void print() { cout << "사각형의 면적 :" << crect::getarea() << endl; }
};
int main()
{
	ccircle cir(1, 1, 1);
	crect rect(2, 2, 2, 2);
	cshape *pspe;

	pspe = &cir;
	cout << *pspe;//cout.operator<<(pspe)
	
	pspe = &rect;
	cout << *pspe;
	return 0;
}