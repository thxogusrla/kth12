#include<iostream>
using namespace std;
 struct point { //구조체 생성.
//private:
	int x, y; //변수가 상수가 되면서 변경이 불가가 된다말이야. 
	point(int a) {} //strcut 와 class 둘다 생성자를 만들수가 있는데, 생성자를 만들게 되면 디폴트 생성자가 만들어지지 않아 생성자 오버로딩을 해주어야 될수도 있다.
	point() : x(0),y(0) {}
};
 struct point sum(const struct point p1,const struct point p2)
{
	struct point po; //근데 po를 선언하면서 po.x po.y 를 갖고 있는데 쓰레기값이 들어있게 되면서 변경이 되었어. 그래서 사용할 수 없는 거지.
	po.x = p1.x + p2.x;
	po.y = p1.y + p2.y;
	return po;
}

int main()
{
	struct point p1, p2;
	struct point c;
	cout << "p1의 x와 y의 좌표를 입력하시오 :";
	cin >> p1.x >> p1.y;
	cout << "p2의 x와 y의 좌표를 입력하시오 :";
	cin >> p2.x >> p2.y;
	c = sum(p1, p2);
	cout << c.x<< " " << c.y;
}