/*클래스를 이용한 함수*/
#include<iostream>
using namespace std;
class car {
	int m_color; //클래스 멤버 변수
	int m_cc; //클래스 멤버 변수
	int m_speed; //클래스 멤버 변수

	void accelerated() { m_speed++; } //클래스 멤버 함수
	void stop() {} //클래스 멤버 함수
	void turnon() {} //클래스 멤버 함수
};
int main(void)
{
	car mycar1, mycar2;
	mycar1.m_speed = 0;
	mycar2.m_cc = 1000;
	
	return 0;
}