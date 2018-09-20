#include<iostream>
using namespace std;
class cmyclass {
private:
	int i;
public:
	cmyclass(int a) { i = a; cout << "생성자: "  << i << endl; }
	~cmyclass() { cout << "소멸자: " << i << endl; }
};
cmyclass m(0); //전역 객체 생성자가 제일 먼저 호출됨.
void f(cmyclass localm) {} //이게 무슨기능인가요 ?
void main()
{
	cmyclass m1(1);
	cmyclass m2[3] = { 2,3,4 }; //배열 3 인 m2
//	f(m2[2]);  뭐지 이함수..
}