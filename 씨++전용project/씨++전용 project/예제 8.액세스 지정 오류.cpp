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
			y.a = 1; y.b = 2; y.c = 3; //c��cpoint class �� private ������ �����Ƿ� ����� �Ұ��ϴ�. private�� ��ӹ��� �ʴٴ� �� �˼��ִ�. 
		}
};
*/
class ccircle : protected cpoint
{
public: int k1;
		void f2() // �� �Լ��� ���� ccircle class �ȿ� �ִ� ���̹Ƿ� ������ ���������� ��θ� ����� �� �ִ�.
		{
			cpoint x;
			ccircle y;
			x.a = 1; x.b = 2; x.c = 3;
			y.a = 1; y.b = 2; y.c = 3; y.k1 = 4;
		}
};
class cshape : public ccircle //���ܰ迡�� ccircle Ŭ������ cpoint���� protected�� ��ӹ޾ұ� ������ �ܺο��� a b c�� ������ �Ұ��� �ϴ�.
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
  ����� �ϴ��� private ������ �ִ� ���� ����� �� ���� �ȴ�.
  */