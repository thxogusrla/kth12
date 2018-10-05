#include<iostream>
using namespace std;
class ctime
{
private:
	int hour, minute;
	int second;
public:
	ctime(int a, int b, int c) : hour(a), minute(b), second(c) {  //a b c 는 각각 시간 분 초로 초기화해줌.
		if (minute > 60) //분이 60분이 넘는다면  =====> else if를 쓰게 된다면 분 과 초 가 둘다 60을 넘게 되면 분만 if문이 실행되고 끝이 나서 맞지 않게 된다.
		{ 
			++hour; //시간을 하나 증가해주고
			minute = minute - 60; //분은 60을 뺀다.
		}
		if (second > 60) { //초가 60초가 넘는다면 
			++minute; //1분 추가해주고
			second = second - 60; //초는 60을 빼준다.
		}
	}
	void print() { cout << hour << "시" << " " << minute << "분" << " " << second << "초" << endl; }
	//ctime operator+(const ctime &p1, const ctime &p2) {} // 멤버함수에 의한 덧셈 오버로딩
	friend ctime operator+(const ctime &p1, const ctime &p2); //전역함수일 경우.
};
ctime operator+(const ctime &p1, const ctime &p2)
{
	return ctime(p1.hour + p2.hour, p1.minute + p2.minute, p1.second + p2.second);
}
int main()
{
	ctime time1(4, 50, 40);
	ctime time2(3, 40, 30);
	ctime time3 = time1 + time2;
	time1.print();
	time2.print();
	time3.print(); //7 90 70 -> 8시 31분 10초
}