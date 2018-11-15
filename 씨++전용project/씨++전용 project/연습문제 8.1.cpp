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
derieve class 는 base로 부터 상속받았다. 하지만 private 영역은 상속받질 못하므로 private 영역에 생성된 a는 derived에 사용하지 못한다.
즉 a,d는 private 영역에 b,e 는 protected 영역에 만들어 졌으므로 사용하지 못하고 그밖의 것들은 public 영역이므로 사용가능하다.
*/