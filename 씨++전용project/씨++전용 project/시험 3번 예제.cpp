#include<iostream>
using namespace std;
struct s
{
	s() {} //s �� s��� �� ���ֱ� ���� ����
	s(const s &o) { cout << " b " << endl; }
};

void f1(s a) {} //�̰Ŵ� &o�� a �� o = a; 
void f2(s &r) {} //&r�� ���ϴ°� r = s�� �Ǹ鼭 ����ü�� ���ϰ� �ǹǷ� ��Ǵ� �Ű�.

 int main()
{
	s s;
//	f1(s);
	f2(s);
}