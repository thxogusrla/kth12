#include<iostream>
using namespace std;

class cpoint
{
private:
	int x, y;
public:
	void setxy(int a, int b) { x = a; y = b; }
	void print() { cout << x << " " << y << endl; }
};
int main()
{
	cpoint p1; //Ŭ������ �����ڰ� ���ǵǾ� ���� ������ �����Ϸ��� ��������� �����ڸ� ������ش�.
	p1.setxy(3, 4);
	p1.print();
	return 0;
}