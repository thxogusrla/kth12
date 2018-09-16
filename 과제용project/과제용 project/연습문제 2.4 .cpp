#include<iostream>
using namespace std;
int getarea(int x, int y) //매개변수의 개수와 대응 되는 타입이 다르므로 함수 오버로딩이 가능
{
	return x * y;
}
double getarea(double r)
{
	return 3.14 * r * r;
}
int main()
{
	int x, y; // 가로, 세로
	double r; // 반지름
	int area;
	while (1) {
		cout << "계산하려는 모양을 선택 하시오 1(직사각형), 2(원의 면적) (종료하려면 -1) : ";
		cin >> area;
		if (area == 1)
		{
			cout << "가로와 세로를 입력하시오 :";

			cin >> x >> y;
			cout << "직사각형의 면적 : " << getarea(x, y) << endl;
		}
		else if (area == 2)
		{
			cout << "반지름을 입력하시오 :";
			cin >> r;
			cout << "원의 면적 = " << getarea(r) << endl;
		}
		else if (area == -1) {
			cout << "종료되었습니다."; break;
	}
		else cout << "다시 입력하시오 "<<endl;
	}
}