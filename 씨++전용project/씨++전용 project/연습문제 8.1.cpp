#include<iostream>
using namespace std;
class base
{
private: int a;
protected: int b;
public: int c;
};
class derived : public base
{
private:
	int d;
	void func1() { a = 1; b = 2; c = 3; d = 4; e = 5; f = 6; }

protected:
	int e;
	void func2() { a = 1; b = 2; c = 3; d = 4; e = 5; f = 6; }

public:
	int f;
	void func3() { a = 1; b = 2; c = 3; d = 4; e = 5; f = 6; }
};



int main()
{
	derived der;
	der.a = 1; der.b = 2; der.c = 3; der.d = 4; der.e = 5; der.f = 6;
	return 0;
}
/*
derieve class �� base�� ���� ��ӹ޾Ҵ�. ������ private ������ ��ӹ��� ���ϹǷ� private ������ ������ a�� derived�� ������� ���Ѵ�.
�� a,d�� private ������ b,e �� protected ������ ����� �����Ƿ� ������� ���ϰ� �׹��� �͵��� public �����̹Ƿ� ��밡���ϴ�.
*/