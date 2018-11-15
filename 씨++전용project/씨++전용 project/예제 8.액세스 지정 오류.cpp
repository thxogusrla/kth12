#include<iostream>
using namespace std;
class cpoint
{
public: int a;
protected: int b;
private: int c;
		 void f3()
		 {
			 a = 1; b = 2; c = 3;
		 }
};
/*
class ccircle : public cpoint
{
public: int k;
		void f1()
		{
			cpoint x;
			ccircle y;
			x.a = 1; x.b = 2; x.c = 3;
			y.a = 1; y.b = 2; y.c = 3; //c는cpoint class 에 private 영역에 있으므로 사용이 불가하다. private는 상속받지 않다는 걸 알수있다. 
		}
};
*/
class ccircle : protected cpoint
{
public: int k1;
		void f2() // 이 함수는 현재 ccircle class 안에 있는 것이므로 엑세스 지정연산자 모두를 사용할 수 있다.
		{
			cpoint x;
			ccircle y;
			x.a = 1; x.b = 2; x.c = 3;
			y.a = 1; y.b = 2; y.c = 3; y.k1 = 4;
		}
};
class cshape : public ccircle //전단계에서 ccircle 클래스는 cpoint에서 protected로 상속받았기 때문에 외부에서 a b c값 변경이 불가능 하다.
{
	void f4()
	{
		cpoint x;
		ccircle y;
		cshape z;
		x.a = 1; x.b = 2; x.c = 3;
		y.a = 1; y.b = 2; y.c = 3;
		z.a = 1; z.b = 2; z.c = 3;
	}
};
/*
  상속을 하더라도 private 영역에 있는 것은 사용할 수 없게 된다.
  */