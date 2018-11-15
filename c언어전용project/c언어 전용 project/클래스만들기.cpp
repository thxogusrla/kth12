#include<iostream>
using namespace std;
class S
{
private:
	int x, y;
	const int z;
public:
	S(int a, int b,int d) : x(a), y(b),z(d){}
	S(int c) : x(c) , y(c),z(3) {}
	
};
int main()
{
	S x(1, 2);
	S x1(5);
}