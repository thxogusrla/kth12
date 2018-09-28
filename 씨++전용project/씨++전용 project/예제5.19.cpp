#include<iostream>
using namespace std;
class ccircle {
private:
	class cpoint
	{
	private:
		int x, y;
	public:
		cpoint(int a = 0, int b = 0) : x(a), y(b) {}
		void move(int a, int b) { x += a; y += b; }
		void print() { cout << "중심 : (" << x << "," << y << ")" << endl;  }
	};

	cpoint center; 
	double radius;
public:
	ccircle(int a, int b, double r) :radius(r) { center.move(a, b); center.print(); }
	void print() { cout << "반지름 :" << radius << endl; }
};
int main()
{
	ccircle cir(3, 4, 5);
	cir.print();
	return 0;
}