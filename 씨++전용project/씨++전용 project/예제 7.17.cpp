#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public :
	cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	int &operator[](int index) //operator[index] 
	{
		if (index == 0) return x;
		else if (index == 1) return y;
	}
	friend ostream &operator<<(ostream &out, const cpoint po);

	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
ostream &operator<<(ostream &out, const cpoint po) //out에 왜 참조를 걸어주었을까?
{
	out << "(" << po.x << "," << po.y << ")" << endl;
	return out;
}
int main(void)
{
	cpoint p1(1, 1);
	p1[0] = 2;
	p1[1] = 3;
	p1.print();
	cout << p1;
}
