/*Ŭ������ �̿��� �Լ�*/
#include<iostream>
using namespace std;
class car {
	int m_color; //Ŭ���� ��� ����
	int m_cc; //Ŭ���� ��� ����
	int m_speed; //Ŭ���� ��� ����

	void accelerated() { m_speed++; } //Ŭ���� ��� �Լ�
	void stop() {} //Ŭ���� ��� �Լ�
	void turnon() {} //Ŭ���� ��� �Լ�
};
int main(void)
{
	car mycar1, mycar2;
	mycar1.m_speed = 0;
	mycar2.m_cc = 1000;
	
	return 0;
}