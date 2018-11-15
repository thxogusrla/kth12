#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a, int b) :x(a), y(b) { cout << "cpoint::cpoint(a,b)" << endl; }
	void print() { cout << x << "," << y << endl; }
	cpoint() { cout << "cpoint :: cpoint() 생성자" << endl; }
};
class ccircle
{
private:
	cpoint center; 
	double radius;
public:
	ccircle(int a, int b, double r) :center(a, b), radius(r) {}
	void print() {
		center.print(); //
		cout << "반지름 : " << radius << endl;
	}
	cpoint p1;
	double getarea() { return 3.14 * radius *radius; }
};
int main()
{
	ccircle cir(1, 2, 3);
	cir.print();
	cout << cir.getarea();
	return 0;
}