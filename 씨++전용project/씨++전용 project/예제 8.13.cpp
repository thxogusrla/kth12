#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	cpoint(int a, int b) : x(a), y(b) {} //생성자가 private 영역에 선언됨.
	static cpoint *onlypoint; //정적 cpoin

public:
	static cpoint *getpoint(){ //static 멤버함수는 static 변수로만 접근 가능.
		if (onlypoint == NULL) onlypoint = new cpoint(3, 4);
		return onlypoint;
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
cpoint *cpoint::onlypoint = NULL;
int main()
{
	cpoint::getpoint()->print();
	cpoint *p1 = cpoint::getpoint();
	p1->print();

	return 0;
}