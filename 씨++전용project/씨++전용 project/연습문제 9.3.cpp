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

	A *pa = &objc; //upcasting �� ������,
	//C *pc = &obja; //downcasting �� ���� �ʴ´�.
	
	A &ra = objc;
	//C &rc = obja;
}