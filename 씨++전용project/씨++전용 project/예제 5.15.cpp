#include<iostream>
using namespace std;
class ccar //구조체는 class도 결국엔 지역변수
{
private:
	bool onoff;
	int price, speed;
public:
	ccar(int p) : onoff(false), price(p), speed(0) {}
	void printspeed() { cout << "현재 공백 1개 추가 속도 : " << speed << endl; } //여태까지 모든 것들은class안에서 출력이 되었으므로 참조변수를 사용하지 않았음.
	friend class ccontroller; //freind class ccar 안에 있는 멤버 변수들을 ccar라는 클래스에서 사용할 수 있게 해줌
};
class ccontroller
{
private:
	int price;
public:
	ccontroller(int p) : price(p) {};
	void turnon(ccar &car) { car.onoff = true; } //차를 키다면 
	void turnoff(ccar &car) { car.onoff = false; }
	void speedchange(ccar &car, int v) { car.speed += v; }
};
int main()
{
	ccar mycar(100); //생성자에 매개변수가 하나=가격이 100
	ccontroller mycontroller(10); //가격이 10
	mycontroller.turnon(mycar);
	mycontroller.speedchange(mycar, 5); //차의 속도를 5 올림
	mycar.printspeed();
	mycontroller.turnoff(mycar);
	return 0;
}