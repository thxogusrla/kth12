#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	cpoint(int a, int b) : x(a), y(b) {} //�����ڰ� private ������ �����.
	static cpoint *onlypoint; //���� cpoin

public:
	static cpoint *getpoint(){ //static ����Լ��� static �����θ� ���� ����.
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