#include<iostream>
using namespace std;
class cpoint 
{
private :
	int x, y;
public :
	void setxy(int a, int b) { x = a; y = b; }
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main()
{
	cpoint cp[5]; //cpoint형 객체 배열 선언
	int i;
	for (i = 0; i < 5; i++)
		cp[i].setxy(i,i);
	for (i = 0; i < 5; i++)
		cp[i].print();

}