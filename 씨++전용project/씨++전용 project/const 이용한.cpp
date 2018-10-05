#include<iostream>
using namespace std;
class cshape
{
private:
	int type, len;
	const double pi; //pi는 상수로 사용되고
	static int rectcount;
	static int circlecount;
public:
	cshape(int a, int b) :type(a),len(b),pi(3.14)
	{
		if (type == 1) rectcount++;
		else if (type == 2) circlecount++;
		else cout << "프로그램 종료" << endl;
	}
	cshape():pi(3.14) { rectcount++; }
	double getarea() //넓이를 구하는 함수
	{
		if (type == 1) return len * len;
		else if (type == 2) return pi * len * len;
	}
	static int getrectcount() //
	{
		return rectcount;
	}
	static int getcirclecount()
	{
		return circlecount;
	}
};

int cshape ::rectcount = 0;
int cshape ::circlecount = 0;
int main()
{
	cshape s1(1, 5);
	cshape s2(2, 5);
	cshape *prect = new cshape[3]; 
	cout << "사각형의 개수 :" << cshape::getrectcount() << endl;
	cout << "원 개수 :" << cshape::getcirclecount() << endl;
	cout << "원의 면적 :" << s1.getarea() << endl;
	delete[]prect;

	cout << "사각형의 개수 :" << cshape::getrectcount() << endl;
	cout << "원 개수 :" << cshape::getcirclecount() << endl;
	cout << "원의 면적 :" << s2.getarea() << endl;
}