#include<iostream>
using namespace std;
struct s
{
	s() {} //s 는 s라는 걸 써주기 위해 썻고
	s(const s &o) { cout << " b " << endl; }
};

void f1(s a) {} //이거는 &o에 a 즉 o = a; 
void f2(s &r) {} //&r이 뜻하는게 r = s가 되면서 구조체가 변하게 되므로 언되는 거고.

 int main()
{
	s s;
//	f1(s);
	f2(s);
}