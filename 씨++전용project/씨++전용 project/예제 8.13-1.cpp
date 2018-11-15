#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
	cpoint(int a, int b) :x(a), y(b) {}
	static cpoint *onlypoint;
public:
	void pirnt() {
		cout << x << "," << y << endl;
	}
	static cpoint *getpoint()
	{

	}

};
cpoint cpoint::onlypoint = NULL;