#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	static int count;
public:
	cpoint(int a, int b) :x(a), y(b) { count++; }
	~cpoint() { count--; }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	static int getcount() { return count; }
};

int cpoint::count = 0; //클래스에서 statice은 함수명으로 접근이 가능.

int main()
{
	cpoint p1(1, 2);
	cpoint *p2 = new cpoint(3, 4);
	cout << cpoint::getcount() << endl; // 클래스명으로 getcount 접근
	cout << p1.getcount() << endl; //객체를 통해 static 함수 접근
}