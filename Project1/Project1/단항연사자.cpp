#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	cpoint &operator-() { x = -x; y = -y; return *this; } // 이건 자기 함수가 반환이 되었잖아?
	friend ostream &operator<<(ostream &out, const cpoint &po);

};
//자기 함수를 반환하게 되면 함수가 종료가 되어도 사라지지 않는구나. &가 붙으면 정적이 된다?
 ostream &operator<<(ostream &out, const cpoint &po)
{
	 out << "(" << po.x << "," << po.y << ")" << endl;
	 return out;
}
int main()
{
	cpoint p1(1, 1);
	cpoint p2 = -p1; // p2 = -1 -1
	cout << p2;
	cpoint p3 = -p1;
	cout << p1;
	cout << p3;
}