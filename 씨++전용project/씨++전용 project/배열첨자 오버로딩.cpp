#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	int &operator[](int index) 
	{
		if (index == 0) return x;
		else if (index == 1)return y;
	} 
};