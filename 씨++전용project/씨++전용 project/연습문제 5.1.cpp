#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint() {}
	void setxy(int a, int b) { x = a; y = b; }
	void print() { cout << "{" << x << "," << y << "}"; }
};
int main()
{
	int a, b;
	cpoint cp[3][2];
	cout << "cp[3][2]의 원소를 입력하시오 : \n";
	for (int i = 0; i < 3; i++)
	{
		cout << "  ";
		for (int j = 0; j < 2; j++)
		{
			cin >> a >> b;
			cp[i][j].setxy(a, b);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			cp[i][j].print();
		cout << endl;
	}
}