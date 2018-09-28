#include<iostream>
using namespace std;
class ccar //����ü�� class�� �ᱹ�� ��������
{
private:
	bool onoff;
	int price, speed;
public:
	ccar(int p) : onoff(false), price(p), speed(0) {}
	void printspeed() { cout << "���� ���� 1�� �߰� �ӵ� : " << speed << endl; } //���±��� ��� �͵���class�ȿ��� ����� �Ǿ����Ƿ� ���������� ������� �ʾ���.
	friend class ccontroller; //freind class ccar �ȿ� �ִ� ��� �������� ccar��� Ŭ�������� ����� �� �ְ� ����
};
class ccontroller
{
private:
	int price;
public:
	ccontroller(int p) : price(p) {};
	void turnon(ccar &car) { car.onoff = true; } //���� Ű�ٸ� 
	void turnoff(ccar &car) { car.onoff = false; }
	void speedchange(ccar &car, int v) { car.speed += v; }
};
int main()
{
	ccar mycar(100); //�����ڿ� �Ű������� �ϳ�=������ 100
	ccontroller mycontroller(10); //������ 10
	mycontroller.turnon(mycar);
	mycontroller.speedchange(mycar, 5); //���� �ӵ��� 5 �ø�
	mycar.printspeed();
	mycontroller.turnoff(mycar);
	return 0;
}