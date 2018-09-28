#include<iostream>
using namespace std;
class ccircle
{
private:
	int x, y; //중심인 x,y
	double radius; //반지름.
public:
	//ccircle() :x(0),y(0),radius(1.0){} 밑에 있는 생성자와 같은 생성자이므로 오류
	ccircle(int a=0, int b=0) : x(a), y(b), radius(1.0) {} //디폴트 매개변수 사용.
	ccircle(int a, int b, double c) : x(a), y(b), radius(c) {} //생성자를 초기화.
	double getarea() 
	{
		return 3.14 * radius*radius;
	}
	double getarea(double radius_get)
	{
		return 3.14 * radius_get * radius_get;
	}
	void move(int a, int b) { x += a; y += b; }
	void print() { cout << "중심 : (" << x << "," << y << ")" << " " << "면적 :" << getarea() << endl; }
};
int main()
{
	ccircle c1;
	ccircle c2(1, 1);
	ccircle c3(2, 2,2);
	cout << "getarea 테스트 :" << c1.getarea(10) << endl;
	c2.move(3, 3);
	c1.print();
	c2.print();
	c3.print();
}