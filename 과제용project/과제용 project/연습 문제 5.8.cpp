#include<iostream>
using namespace std;
class cshape
{
private: int type, len;
		 static int reccount;
		 static int circlecount;
		 const int pi;
public: 
	cshape(int a, int b):type(a),len(b),pi(3.14) {
		if (a == 1) reccount++; //만약 타입이 정사각형이라면 카운트한번증가
		else if (a == 2) circlecount++; //원이라면 원에 대한 카운트 한번 증가.
		else { cout << "잘못 입력 사용 종료."; }
	}
	cshape() :pi(3.14) { reccount++; } //
	static int getrectcount() { return reccount; }
	static int getcirclecount() { return circlecount; }
	double getarea() { if (type == 1) return len * len;
	else return pi * len *len;
	}
};
int cshape::reccount = 0;
int cshape::circlecount = 0;
int main()
{
	cshape s1(1, 5);
	cshape s2(2, 5);
	cshape *prect = new cshape[3]; //prect[0],prect[1],prect[2]가 있으니까 생성인자가 하나도 없잖아. 그리고 class함수에 생성인자가 없는건 정사각형 취급하니깐.
	cout << "사각형의 개수 :" << cshape::getrectcount() << endl;
	cout << "원 개수 :" << cshape::getcirclecount() << endl;
	cout << "원의 면적 :" << s1.getarea() << endl;
	delete[]prect;

	cout << "사각형의 개수 :" << cshape::getrectcount() << endl;
	cout << "원 개수 :" << cshape::getcirclecount() << endl;
	cout << "원의 면적 :" << s2.getarea() << endl;
}