#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	static int count;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) { count++; } //생성자에서는 statice 멤버 변수를 쓸수있나보네
	~cpoint() { count--; } //소멸자는 함수마지막에 호출이 되잖아.
	void print() { cout << "("<< x << "," << y << ")" << endl; }
	static int getcount() { return count; } //static 멤버 함수는 statice 멤버 변수만을 사용할 수 있다.
};
int cpoint::count = 0; //명시적으로 초기화를 시켜주어야 생성된다.
int main()
{
	cpoint p1(1,2);
	cpoint p3(3, 5);
	cpoint *p2 = new cpoint(3, 4);  //이것도 생성자라 할수있나?
	p1.print();
	p2->print();
	cout << "count :" << cpoint::getcount() << endl;
	delete p2;
	cout << "count :" << p1.getcount() << endl;
	cout << "count :" << p3.getcount() << endl;

	return 0;
}