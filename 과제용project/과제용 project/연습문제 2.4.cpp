#include<iostream>
using namespace std;
int GetArea(int wid, int col) //가로와 세로
{
	return wid * col;
}
double GetArea(int r)
{
	return 3.14 * r * r;
}
int main()
{
	int wid, col; //가로와 세로
	int r; //반지름
	int shape; // 모양선택
	cout << "직사각형 1 과 원 2 를 선택하시오(1,2) : " << endl;
	cin >> shape;

	if (shape == 1)
	{
		cout << "가로 세로값 입력 ";
		cin >> wid >> col;
		cout << "직사각형의 넓이 " << GetArea(wid,col);
	}
	else if (shape == 2)
	{
		cout << "반지름 입력  ";
		cin >> r;
		cout << "원의 면적 " << GetArea(r);
	}
	return 0;
}