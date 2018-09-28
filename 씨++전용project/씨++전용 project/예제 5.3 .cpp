#include<iostream>
using namespace std;
class cpoint 
{
private :
	int x, y;
public:
	cpoint(int a, int b) : x(a), y(b) {}
	void print() { cout << "(" << x << "," << y <<"}" << endl; }
};
int main()
{
	cpoint cp[5] = { cpoint(0,0) , cpoint(1,1) ,cpoint(2,2), cpoint(3,3), cpoint(4,4) }; //객체 배열을 선언과 동시에 초기화
	for (int i = 0; i < 5; i++)
		cp[i].print();
}