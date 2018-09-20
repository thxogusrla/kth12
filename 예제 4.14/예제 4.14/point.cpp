#include"point.h"
 cpoint::cpoint(int a, int b) : x(a), y(b){}
 void cpoint::move(int a, int b)
 {
	 x = x + a;
	 y = y + b;
 }

 void cpoint::print()
 {
	 cout << "(" << x << "," << y << ")" << endl;
 }