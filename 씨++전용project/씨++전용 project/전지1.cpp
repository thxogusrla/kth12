#include<iostream>
#include<cmath>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a, int b) :x(a), y(b) {}
	cpoint(const cpoint &po) 
	{
		x = po.x; y = po.y;
	}

	friend void length(cpoint po_1, cpoint po_2);
	
};
void length(cpoint po_1, cpoint po_2)
{
	double x = po_1.x - po_2.x;
	double y = po_1.y - po_2.y;
	cout << sqrt(x*x+y*y) << endl;
}
int main()
{
	cpoint p1(1, 4), p2(5, 3);
	length(p1, p2);
	return 0;
}