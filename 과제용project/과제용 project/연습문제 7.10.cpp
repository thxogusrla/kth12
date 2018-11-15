#include<iostream>
using namespace std;
class ccomplex
{
private:
	double a, b;
public:
	ccomplex(double c = 0, double d = 0) :a(c), b(d) {}
	ccomplex operator+(const ccomplex &p1) { return ccomplex(a + p1.a, b + p1.b); } //p3 = p1 + p2 -> p1.operator+(p2)
	ccomplex operator-(const ccomplex &p1) { return ccomplex(a - p1.a, b - p1.b); }
	friend ccomplex operator+(double c, const ccomplex &p2);
	friend ccomplex operator-(double c, const ccomplex &p2);
	friend ostream &operator<<(ostream &out, const ccomplex po);
	friend istream &operator>>(istream &in, ccomplex &po);
};
ostream &operator <<(ostream &out, const ccomplex po)
{
	out << po.a << "+"<< po.b << "i" << endl;
	return out;
}
istream &operator >>(istream &in, ccomplex &po)
{
	cout << "a+bi의 값을 입력하시오" << endl;
	in >> po.a >> po.b;
	return in;
}
ccomplex operator+(double c, const ccomplex &p2) //전역함수로 다시 한번 덧셈 오버로딩 한 이유는 a.operator+(p1)에서 a가 ccomplex 변수가 아니라 operator 를 사용할 수 없어 만들어줌
{
	return ccomplex(c + p2.a, c + p2.b); //p3 = a+p1(a는 상수) 을 가능하게 해줌. -> p3 = operator+(p1,p2); 로 작동하게 된다.
}
ccomplex operator-(double c, const ccomplex &p2)
{
	return ccomplex(c - p2.a, c - p2.b);
}
int main()
{
	ccomplex c1(1, 2), c2(3, 4); // a+bi -> 1 + 2i / 3 +4i
	cout << c1 << c2;
	cin >> c1 >> c2;
	double a = 2;
	ccomplex c3 = c1 + c2;
	ccomplex c4 = c1 - c2;
	ccomplex c5 = c1 - a;
	ccomplex c6 = a - c1;
	cout << c3 << c4 << c5 << c6;

	return 0;
}