#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(const cpoint &po) : x(po.x), y(po.y) { cout << "差紫持失切:" << x << "," << y << endl; }
	cpoint(int a = 0, int b = 0) :x(a), y(b) { cout << "持失切 1:" << x << "," << y << endl; }
	cpoint(const cpoint &po, int a, int b) 
	{
		x = po.x + a; y = po.y + b;
		cout << "持失切 2 :" << x << "," << y << endl;
	}
	~cpoint() { cout << "社瑚切:" << x << "," << y << endl; }
	void print() { cout << x << "," << y << endl; }
};
cpoint getpoint(cpoint po) { return cpoint(po, 2, 2); }
int main()
{
}