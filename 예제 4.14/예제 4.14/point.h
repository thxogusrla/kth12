#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a, int b);
	void move(int a, int b);
	void print();
};
#endif