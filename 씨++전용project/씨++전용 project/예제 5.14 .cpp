#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	friend void center(cpoint p1, cpoint p2); //class 객체 안에 센터 함수를 friend로 선언
};
void center(cpoint p1, cpoint p2) //center함수는 cpoint 객체의 멤버 변수들을 사용할 수 있다.
{
	cpoint p;
	p.x = (p1.x + p2.x) / 2;
	p.y = (p1.y + p2.y) / 2;
	cout << "중심 : " << "(" << p.x << "," << p.y << ")" << endl;
}
int main()
{
	cpoint cp1(1, 2), cp2(3, 4);
	center(cp1, cp2);
}