#include<iostream>
using namespace std;
struct x 
{
	x() { b++; }
	~x() { b--; cout << b << endl; }
	static int b;
};
int x::b; //초기화 안해주면 자동으로 0으로 초기화?
int main()
{
	{
		x x1, x2;
		cout << x::b << endl; 
	}//함수가 끝나면 소멸자가 생성이 되면서  b가 사라진다.
	{
		x x[5]; //x[0],[1],[2],[3],[4] 총 5개가 만들어지면서 b 는 5가 된다.
		cout << x[0].b << endl;
	}

}
