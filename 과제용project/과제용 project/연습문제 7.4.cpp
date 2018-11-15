#include<iostream>
using namespace std;
/*
	-- x - A = (x - a) + -bi
	-> x = (x - a); A =)
	4 + 6i
	-2 + -2i
	-1 + 2i
	1 + -2i

*/

class ccomplex
{
private:
	double a, b;
public :
	ccomplex(double c = 0, double d = 0) :a(c), b(d) {}
	void print() { cout << a << "+" << b << "i" << endl; }
	//ccomplex(const ccomplex &p1) { a = p1.a; b = p1.b; } //이 복사생성자는 왜 만들어 주었을까? 
	ccomplex operator+(const ccomplex &p1) { return ccomplex(a + p1.a, b + p1.b); } //p3 = p1 + p2 -> p1.operator+(p2)
	ccomplex operator-(const ccomplex &p1) { return ccomplex(a - p1.a, b - p1.b); }
	friend ccomplex operator+(double c, const ccomplex &p2); //명시적으로 호출하게 되면 -> c.operator+(p2)가 됨. 근데 c는 변수이기 때문에 .연산자를 사용 x
	friend ccomplex operator-(double c, const ccomplex &p2);
};
ccomplex operator+(double c, const ccomplex &p2) //전역함수로 다시 한번 덧셈 오버로딩 한 이유는 a.operator+(p1)에서 a가 ccomplex 변수가 아니라 operator 를 사용할 수 없어 만들어줌
{
	return ccomplex(c + p2.a, c + p2.b); //p3 = a+p1(a는 상수) 을 가능하게 해줌. -> p3 = operator+(a,p2); 로 작동하게 된다.
}
ccomplex operator-(double c, const ccomplex &p2)
{
	return ccomplex(c - p2.a,0 - p2.b);
}
int main()
{
	ccomplex c1(1, 2), c2(3, 4); // a+bi -> 1 + 2i / 3 +4i
	double a = 2;
	ccomplex c3 = c1 + c2;
	ccomplex c4 = c1 - c2;
	ccomplex c5 = c1 - a;
	ccomplex c6 = a - c1;

	c3.print(); //4+6i
	c4.print(); //-2 + -2i
	c5.print(); //-1 +oi
	c6.print(); //1 + 2i
}