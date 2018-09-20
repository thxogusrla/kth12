#include<iostream>
using namespace std;
class cpoint {
private:
	int x, y;
public :
	cpoint(int a, int b) { x = a; y = b; } //생성자는 private 영역에 있는 속성들을 초기화 시켜주기 위해 사용함.
	cpoint(int a) { x = a; y = 0; } //생성자 오버로딩
	void print() { cout << x << " " << y << endl; }
};
int main(void)
{
	cpoint po = { 1,2 }; //cpoint po = {1 , 2} 는 x와 y에 각각 1,2 가 초기화 됨.
	po.print();
	cpoint p2(5); // x= 5 와 y = 0이 초기화 됨.
	p2.print();
	return 0;
}
