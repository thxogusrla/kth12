#include<iostream>
using namespace std;
class A
{};
class B :public A
{};
class C :public B
{};
int main()
{
	A obja;
	C objc;

	A *pa = &objc; //upcasting 은 되지만,
	//C *pc = &obja; //downcasting 은 되지 않는다.
	
	A &ra = objc;
	//C &rc = obja;
}