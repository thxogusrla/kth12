#include<iostream>
using namespace std;
class p1
{
public: int a;
protected: int b;
private: int c;

};
void f1()
{
	class p2 :public p1
	{
	public: int x;
	protected: int y;
	private: int z;
			 void f1() { a = 1; b = 2; c = 3; }
			 void f2() { x = 1; y = 1; z = 1; }
	};
	p2 po;
	po.b = 2;
	po.a = 1;
	po.y = 1;

}