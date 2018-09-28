#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a, int b) : x(a), y(b) {} //생성자에 바로 초기화를 해준거지.
	void print() { cout << "(" << x << "," << y << ")"; }
};
int main()
{
	cpoint cp[3][2] = { {cpoint(0,0),cpoint(0,1)},  //[0][0],[0][1] ->배열 각 인덱스에는 x와 y의 값이 저장되어있다.
						{cpoint(1,0),cpoint(1,1)},
						{cpoint(2,0),cpoint(2,1)} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			cp[i][j].print();
		cout << endl;
	}
}